#include "stdafx.h"
#include "practice2-7.h"

int cmyname(){
//	using namespace std;
	char name[100], address[100];
	
	cout << "���������������" << endl;
	gets_s(name);

	cout << "��������ĵ�ַ��" << endl;
	gets_s(address);

	cout << "��ã�" << name <<"."<< endl;
	cout << "��ס��" << address <<"."<< endl;
	
	return 0;
}

int translong(){
	int clong;
	cout << "���������	long�� " << endl;
	
	cin >> clong;

	cout << "ʵ�ʾ�����" << 220 * clong << "��" << endl;

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
	cout << "������������䣺" << endl;
	int year = 0,month = 0;
	cin >> year;
	month = 12 * year;
	cout << "���������" << month << "����" << endl;

	return 0;
}

int sesToWasT(){
	cout << "�����������¶ȣ�" << endl;
	int tempreture = 0;
	cin >> tempreture;
	cout << "���ڵĻ����¶���" << (tempreture * 9 / 5 + 32)<< endl;
	return 0;
}

int transYL(){
	cout << "���������ֵ��" << endl;
	double yearlight = 0;
	cin >> yearlight;
	cout << yearlight << "���� = " << 63240 * yearlight << "���ĵ�λ" << endl;

	return 0;
}

void showTime(int h,int m){
	cout << "Time:" << h << ":" << m << endl;
	return;
}