#include "stdafx.h"
#include "practice5-7.h"


int addall(){
	cout << "����������������";
	int a=0, b=0,ansab = 0;
	cin >> a >> b;
	if (a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++){
		ansab += i;
	}
	cout << a << "��" << b << "�ĺ���" << ansab << endl;

	return 0;
}
int fact(){
	array<long double, 16> afact;
	afact[0] = afact[1] = (long double)1;
	for (int i = 2; i < 16; i++)
		afact[i] = i * afact[i-1];
	cout.setf(ios_base::fixed);
//	cout.setf(ios_base::showpoint);
//	cout.setf(ios_base::right);
//	cout.setf(ios_base::showbase);
//	cout.unsetf(ios_base::scientific);
	for (int i = 0; i < 16; i++)
		cout << i << "!=" << afact[i] << endl;

	return 0;
}

int addeach(){
	int i = 1, ansi = 0;
	
	while (i!=0){
		cout << "������һ�����֣�";
		cin >> i;
		ansi += i;
	}
	cout << "��������ܺ��ǣ�" << ansi << endl;

	return 0;
}

int invest(){
	double comprate = 1.05, Daphne = 100, Cleo = 100;
	int year = 0;
	while (Cleo<=Daphne){
		Cleo *= comprate;
		Daphne += 10;
		year++;
	}
	cout.setf(ios_base::fixed);
	cout << year << "���Ժ�Cleo��Ͷ�ʼ�ֵ������Daphne���ֱ��ǣ�" << Cleo << "(Cleo) " << Daphne << "(Daphne)" << endl;
	return 0;
}

int sals(){
//	char *month[13] = {"һ","��","��","��","��","��","��","��","��","ʮ","ʮһ","ʮ��"};
	int number[13] = {0};
	string month[13] = { "һ", "��", "��", "��", "��", "��", "��", "��", "��", "ʮ", "ʮһ", "ʮ��" };

	for (int i = 0; i < 12; i++){
		cout << "������" << month[i] << "�¡�C++ for Fools������������������";
		cin >> number[i];
		number[12] += number[i];
	}
	cout << "����ȫ�����������" << number[12] << endl;
	return 0;
}
int thrsals(){
	int number[3][13] = { { 0 } },year = 0,allsal = 0;
	string month[13] = { "һ", "��", "��", "��", "��", "��", "��", "��", "��", "ʮ", "ʮһ", "ʮ��" };
	for (int i = 0; i < 3; i++){
		year = i + 1;
		for (int j = 0; j < 12; j++)
		{
			cout << "�������" << year << "��" << month[j] << "��" << "����������";
			cin >> number[i][j];
			number[i][12] += number[i][j];
		}
		cout << "��" << year << "����������ܺ���" << number[i][12] << endl;
		allsal += number[i][12];
	}
	cout << "���������������" << allsal << endl;
	return 0;
}

int mycar(){
	cout << "������ϣ������������������";
	int n = 0;
	cin >> n;
	car *logcata = new car[3];
	for (int i = 0; i < n; i++){
		cout << i+1 << "�ų���" << endl << "�����������̣�";
		cin >> logcata[i].company;
		cout << "�����복������ݣ�";
		cin >> logcata[i].cropyear;
	}
	cout << "��������ĳ�����Ϣ��" << endl;
	for (int i = 0; i < n; i++){
		cout << logcata[i].cropyear << " " << logcata[i].company << endl;
	}

	return 0;
}
int donech(){
	int max = 100,count = 0;
	char *input =new char[max];
	cout << "�����뼸������";
	do{
		cin >> input;
		char temp;
		cin.get(temp);
		count++;
	} while (strcmp(input, "done"));
	cout << "��done��ǰ����һ��������" << count-1 << "������" << endl;
	return 0;
}
int donestr(){
	string input;
	int count = 0;
	cout << "�����뼸������";
	do{
		cin >> input;
		char temp;
		cin.get(temp);
		count++;
	} while (input != "done");
	cout << "��done ��ǰ����һ��������" << count - 1 << "������" << endl;
	return 0;
}
int showstar(){
	cout << "��������Ҫ��ʾ��������";
	int r = 0,c = 0;
	cin >> r;
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= r - i; j++)
			cout << ".";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
