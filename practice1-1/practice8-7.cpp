#include "stdafx.h"
#include "practice8-7.h"
#include <iterator>
#include <string>
#include <cstring>

int print_str(char * str, int n){
	if (n == 0){
		print_str_num++;
		cout << str << endl;
		return 0;
	}
	else{
		print_str_num++;
		cout << "打印" << print_str_num << "次str.\n";
		for (int i = 0; i < print_str_num; i++){
			cout << str << endl;
		}
		return print_str_num;
	}
}
void test_print_str(){
	cout << "请输入你想说的话：";
	char * input = new char[1024];
	cin.getline(input,1024);
//	cin >> *input;
	cout << "\t打印一次\n";
	print_str(input);
	cout << "\t打印多次\n";
	for (int i = 1; i < 6; i++)
		print_str(input, i);
	delete [] input;
	return;
}
void set_candybar(CandyBar & mycandy, char * SetBell, double SetWeight, int SetKalori){
	mycandy.bell = SetBell;
	mycandy.weight = SetWeight;
	mycandy.kalori = SetKalori;
	return;
}
void show_candybar(const CandyBar & mycandy){
	cout << "\tShow CandyBar\nBell:" << mycandy.bell << endl
		<< "Wegith:" << mycandy.weight << endl
		<< "Kalori:" << mycandy.kalori << endl;
	return;
}
void test_candybar(){
	CandyBar candy;
	cout << "设置默认CandyBar结构体并且打印" << endl;
	set_candybar(candy);
	show_candybar(candy);
	char * mybell = "WanGshuAng";
	double myweight = 84.5F;
	int mykalori = 2222;
	cout << "设置我的CandyBar结构体并且打印" << endl;
	set_candybar(candy, mybell, myweight, mykalori);
	show_candybar(candy);
	return;
}
void upper_string(string & instring){
	string::iterator str_iter = instring.begin();
	while (str_iter != instring.end()){
		*str_iter = toupper(*str_iter);
		cout << *str_iter;
		str_iter++;
	}
	return;
}
void test_up_str(){
	cout << "请输入英文字符串,输入q退出：";
	string instr;
	getline(cin, instr);
	while (instr.compare("q")){
		upper_string(instr);
		cout << "\n下一个字符串（q退出）：";
		getline(cin,instr);		
	}
	return;
}
void set(stringy & beany,const char * istr){
	int length = strlen(istr);
	beany.ct = length;
	beany.str = new char[length+10];
	strcpy(beany.str, istr);
//	cout << "beany :" << beany.str << "And Length" << beany.ct << endl;
	return;
}
void show(const stringy stry,int pt){
	for (int i = 0; i < pt; i++)
		cout << stry.str << endl;
	return;
}
void show(const char * str, int pt){
	for (int i = 0; i < pt; i++)
		cout << str << endl;
	return;
}
void test_str_show(){
	stringy beany;
	char testing[] = "Reality isn`t what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	return;
}
template <typename T>
T max5(T myt[]){
	T max = myt[0];
	for (int i= 1; i < 5; i++){
		if (myt[i] > max){
			max = myt[i];
		}
	}
	return max;
}
void test_max5(){
	int max5_int[5] = { 12, 53, 0, 78, 1025 };
	double max5_double[5] = { 1138.654, 122312.54564, 112.0, 165.8, 126.6 };
	cout << "int 数组：" << endl;
	for (int i = 0; i < 5; i++)
		cout << max5_int[i]<<"\t";
	cout << "其中最大值是：" << max5(max5_int) << endl;
	cout << "double 数组：" << endl;
	for (int i = 0; i < 5; i++)
		cout << max5_double[i] << "\t";
	cout << "其中最大值是：" << max5(max5_double) << endl;
	return;
}
template <typename T>
T maxn(const T myt[], int n){
	T max = myt[0];
	for (int i = 1; i < n; i++){
		if (myt[i] > max){
			max = myt[i];
		}
	}
	return max;
}
//typedef char * pc;
template <> pc maxn<pc>(const pc strpt[], int n){
	int length = strlen(strpt[0]);
	int max = 0;
	for (int i = 1; i < n; i++){
		if (length < (int)strlen(strpt[i])){
			max = i;
			length = strlen(strpt[i]);
		}
	}
	return strpt[max];
}

void test_maxn(){
	int maxn_int[6] = { 12, 53, 0, 78, 1025 ,10326};
	double maxn_double[4] = { 1138.654, 122312.54564, 112.0, 165.8};
	cout << "int 数组：" << endl;
	for (int i = 0; i < 6; i++)
		cout << maxn_int[i] << "\t";
	cout << "其中最大值是：" << maxn(maxn_int,6) << endl;
	cout << "double 数组：" << endl;
	for (int i = 0; i < 4; i++)
		cout << maxn_double[i] << "\t";
	cout << "其中最大值是：" << maxn(maxn_double,4) << endl;

	pc mypc_arry[4] = { "The first string.", "Second", "Thrid", "The last string is the longest.haha" };
	cout << "数组指针所指向的数组如下：" << endl;
	for (int i = 0; i < 4; i++)
		cout << mypc_arry[i] << endl;
	cout << "其中字符串最长的是：" << maxn<pc>(mypc_arry, 4) << endl;

	return;
}
