#include "stdafx.h"
#include "practice2-7.h"

int cmyname(){
//	using namespace std;
	char name[100], address[100];
	
	cout << "请输入你的姓名：" << endl;
	gets_s(name);

	cout << "请输入你的地址：" << endl;
	gets_s(address);

	cout << "你好！" << name <<"."<< endl;
	cout << "你住在" << address <<"."<< endl;
	
	return 0;
}

int translong(){
	int clong;
	cout << "请输入距离	long： " << endl;
	
	cin >> clong;

	cout << "实际距离是" << 220 * clong << "码" << endl;

	return 0;
}

int coutT(){
	cout << "Three blind mice" << endl;
	return 0;
}

int coutS(){
	cout << "See how they run" << endl;
	return 0;
}

int yearToMonth(){
	cout << "请输入你的年龄：" << endl;
	int year = 0,month = 0;
	cin >> year;
	month = 12 * year;
	cout << "你的年龄有" << month << "个月" << endl;

	return 0;
}

int sesToWasT(){
	cout << "请输入摄氏温度：" << endl;
	int tempreture = 0;
	cin >> tempreture;
	cout << "现在的华氏温度是" << (tempreture * 9 / 5 + 32)<< endl;
	return 0;
}

int transYL(){
	cout << "请输入光年值：" << endl;
	double yearlight = 0;
	cin >> yearlight;
	cout << yearlight << "光年 = " << 63240 * yearlight << "天文单位" << endl;

	return 0;
}

void showTime(int h,int m){
	cout << "Time:" << h << ":" << m << endl;
	return;
}