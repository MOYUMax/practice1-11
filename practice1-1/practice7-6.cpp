#include "stdafx.h"
#include "practice7-6.h"

double thavg(double a, double b){
	return 2.0*a*b/(a+b);
}
int ingolf(double a[], int n){
	cout << "请输入最多10个高尔夫成绩：";
	int i = 0;
	while (i >= 0 && i <= 9 && cin >> a[i]){
		i++;
		if (cin.get() == '\n')
			break;		
	}
	return i;
}
double cavggolf(double a[], int n){
	double avg = 0;
	for (int i = 0; i < n; i++)
		avg += a[i];
	return avg/n;
}
int outgolf(double avg){
	cout << "平均值avg = " << avg << endl;
	return 0;
}
int showbox(box b){
	cout << "maker:\t" << b.maker << endl
		<< "height:\t" << b.heigh << endl
		<< "width:\t" << b.width << endl
		<< "length:\t" << b.length << endl
		<< "volume:\t" << b.volume << endl;
	return 0;
}
int setboxvol(box *b){
	b->volume = b->heigh*b->length*b->width;
	return 0;
}
int mybox(){
	box fb = { "王双双", 5.5F, 4.5F, 6.5F, 0.0F };
	showbox(fb);
	box *pb = &fb;
	setboxvol(pb);
	showbox(*pb);
	return 0;
}
long long factor(long long n){
	if (n == 0)
		return 1;
	else
		return n*factor(n - 1);
}
int test_factor(){
	long long n = 0;
	cout << "请输入一个正整数（负数退出）：";
	cin >> n;
	while (n >= 0){
		cout << "阶乘factor = " << factor(n) << endl;
		cout << "请继续输入：";
		cin >> n;		
	}
	return 0;
}
int lotto(){
	long double rate = 1.0;
	unsigned  fielda = 47, fieldb = 27, numa = 5, numb = 1;
	for (; numa > 0; fielda--, numa--)
		rate = rate*fielda / numa;
	rate = rate*fieldb / numb;
	cout << "47选5且27选1中奖是在" << rate <<"分之一。"<< endl;
	return 0;
}
int Fill_array(double a[], int n){
	cout << "请输入至多"<<n<<"个double数,输入非数字会结束：";
	int i = 0;
	while (i < n&& i >= 0){		
		cin >> a[i];
		if (cin.fail()){
			cin.ignore(10000,'\n');
			break;
		}
		i++;
		cout << "请继续输入：";
	}
	return i;//返回数组的长度
}
int Show_array(double a[], int n){
	cout << "double数组a中的" << n << "个值是：";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}
int Reverse_array(double a[], int n){
	for (int i = 0, j = n - 1; i < j; i++, j--){
		double temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return 0;
}
int test_array(){
	const int n = 100;
	double a[n];
	int length = Fill_array(a, n);
	Show_array(a, length);
	Reverse_array(a, length);
	cout << "反转double数组a后。" << endl;
	Show_array(a, length);
	cout << "反转double数组a的第2到倒数第一个值后。" << endl;
	Reverse_array(&a[1], length - 2);
	Show_array(a, length);
	return 0;
}
double * fill_array(double * begin, int limit){
	int i;
	double temp;
	for (i = 0; i < limit; i++){
		cout << "请输入double值#" << i + 1 << ";";
		cin >> temp;
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			break;
		}
		else if (temp < 0)
			break;
		*(begin + i) = temp;
	}
	return (begin + i);
}
void show_array(double * begin, double * end){
	cout << "double数组包含以下数值：";
	for (double* pd = begin; pd != end; pd++)
		cout << *pd << "\t";
	cout << endl;
}
void revalue(double r, double *begin, double *end){
	for (double *pd = begin; pd != end; pd++)
		*pd *= r;
}
int arrfun3(){
	const int Max = 100;
	double poperties[Max];
	double *begin = poperties, *end = NULL;
	cout << "请输入至多100个double数字，以非数字结束！" << endl;
	end = fill_array(begin, Max);
	show_array(begin, end);
	if (begin != end){
		cout << "请输入你的数值：";
		double factor;		
		while (!(cin >> factor)){
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "输入错误，请重新输入：";
		}
		revalue(factor, begin, end);
		show_array(begin, end);
	}
	cout << "完成！" << endl;
	return 0;
}

void fill(double a[], int n){
	for (int i = 0; i < n; i++){
		cout << "请输入" << Snames[i] << "季的开支：";
		cin >> a[i];
	}
	return;
}
void fill(expense &e){
	for (int i = 0; i < seasons; i++){
		cout << "请输入" << Snames[i] << "季的开支：";
		cin >> e.a[i];
	}
	return;
}
void show(const double a[], int n){
	double total = 0.0;
	cout << "每个季度的花销如下：" << endl;
	for (int i = 0; i < n; i++){
		cout << Snames[i] << "季：\t" << a[i]<<"元"<<endl;
		total += a[i];
	}
	cout << "总花销：\t" << total << endl;
	return;
}
void show(const expense e){
	double total = 0.0;
	cout << "每个季度的花销如下：" << endl;
	for (int i = 0; i < seasons; i++){
		cout << Snames[i] << "季：\t" << e.a[i] << "元" << endl;
		total += e.a[i];
	}
	cout << "总花销：\t" << total << endl;
	return;
}
int arrobj(){
	
//	double a[seasons];
//	fill(a, seasons);
//	show(a, seasons);
	expense ex;
	fill(ex);
	show(ex);
	return 0;
}
int getinfo(student pa[], int n){
	int length = 0;
	cout << "请输入不超过" << n << "个学生的名称，爱好，能力值。（输入错误信息将结束输入）\n";
	while (length<n){
		cout << "学生" << length + 1 << "的姓名：";
//		cin>> noskipws >> pa[length].fullname >> pa[length].hobby >> pa[length].ooplevel;
		cin.getline(pa[length].fullname, SLEN);
		if (pa[length].fullname[0] == '\0'){
			cin.clear();
			break;
		}
		cout << "学生" << length + 1 << "的爱好：";
		cin.getline(pa[length].hobby, SLEN);
		cout << "学生" << length + 1 << "的能力值：";
		cin >> pa[length].ooplevel;	
		cin.get();
		length++;					
	}
	return length;
}
void display1(student st){
	cout << "学生的姓名：" << st.fullname
		<< "\t爱好：" << st.hobby
		<< "\t能力值：" << st.ooplevel << endl;
	return;
}
void display2(const student *ps){
	cout << "学生的姓名：" << ps->fullname 
		<< "\t爱好：" << (*ps).hobby 
		<< "\t能力值：" << ps->ooplevel << endl;
	return;
}
void display2(const student pa[], int n){
	for (int i = 0; i < n; i++){
		cout << "学生"<<i+1<<"的姓名：" << pa[i].fullname 
			<< "\t爱好：" << pa[i].hobby 
			<< "\t能力值：" << pa[i].ooplevel << endl;
	}
	return;
}
void test_student(){
	cout << "输入班级人数：";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display2(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "完成" << endl;
	return;
}
//该函数调用不同的函数来计算a,b
double calculate(double a, double b, double(*pf)(double fa, double fb)){
	double fcal = (*pf)(a, b);
	return fcal;
}
double add(double x, double y){
	return x + y;
}
double mult(double x, double y){
	return x*y;
}
double maxdob(double x, double y){
	return x > y ? x : y;
}
int test_caldob(){
	cout << "请输入两个double 数，我们将进行不同的计算,输入Ctrl+Z键结束。" << endl;
	double ad = 0, bd = 0,rsult[3];
	const char *namecal[] = { "加", "乘", "取最大" };
	while (cin >> ad >> bd){
/*		rsult = calculate(ad, bd, add);
		cout << "加法计算结果：\t" << rsult << endl;
		rsult = calculate(ad, bd, mult);
		cout << "乘法计算结果：\t" << rsult << endl;
		rsult = calculate(ad, bd, maxdob);
		cout << "最大值为：\t" << rsult << endl;
		cout << "请继续输入两个数：";*/
		double(*pf[3])(double, double) = { add, mult, maxdob };
		for (int i = 0; i < 3; i++){
			rsult[i] = calculate(ad, bd, pf[i]);
			cout<< namecal[i] << "法计算结果：\t" << rsult[i] << endl;
		}
		cout << "请输入两个输入，结束Ctrl+Z：";
	}
	
	return 0;
}