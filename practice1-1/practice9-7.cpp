#include "stdafx.h"
#include "practice9-7.h"
#include <string>
#include <new>	//为了使用定位new运算符
void strcount(const char *str){
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters tatal\n";
	return;
}
void test_static(){
	string input;
//	char next;
	cout << "Enter a line:";
	getline(cin, input);
	while (input.length() != 0){
		strcount(input.c_str());
		cout << "Enter next line(Empty to quit):";
		getline(cin, input);
	}
	return;
}
void init_chaff(){
	chaff *mychaff;
	mychaff = new (buffer)chaff[2];
	strcpy(mychaff[0].dross, "The chaff[0]!");
	mychaff[0].slag = 100;

	strcpy(mychaff[1].dross, "The chaff[1]!");
	mychaff[1].slag = 200;
	for (int i = 0; i < 2; i++)
		cout << "mychaff[].dross = " << mychaff[i].dross <<"\tmychaff[].slag = "<<mychaff[i].slag<< endl;
		
//	delete[] mychaff;
	return;
}
namespace SALES{
	void setSales(Sales &s, const double ar[], int n){
		int i = 0;
		double maxa = ar[0], mina = ar[0], count = 0;
		while (i < 4 && i < n){
			s.sales[i] = ar[i];
			if (ar[i] > maxa)
				maxa = ar[i];
			if (ar[i] < mina)
				mina = ar[i];
			count += ar[i];
			i++;
		}
		s.max = maxa;
		s.min = mina;
		s.average = count / i;
		return;
	}
	void setSales(Sales & s){
		cout << "请输入一个double数：";
		int i = 0;
		double maxa = DBL_MIN, mina = DBL_MAX, count = 0;
		while (cin >> s.sales[i] && i < 4){
			count += s.sales[i];
			if (s.sales[i] > maxa)
				maxa = s.sales[i];
			if (s.sales[i] < mina)
				mina = s.sales[i];
			i++;
			cout << "下一个（最多4个）：";
		}
		s.max = maxa;
		s.min = mina;
		s.average = count / i;
		return;
	}
	void showSales(const Sales &s){
		int i = 0;
		int length = sizeof(s.sales) / sizeof(double);
		cout << "Sales for "<<length<<"years";
		while (s.sales[i]!=0 && i < 4){
			cout << s.sales[i++]<<"\t";
		}
		cout << endl << "Sales Max:" << s.max << endl
			<< "Sales Min:" << s.min << endl
			<< "Sales Average:" << s.average << endl;
		return;
	}
}