#include "stdafx.h"
#include "practice4-7.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>

int getprint(){
	char * firstname, *lastname, desgrade;
	int age = 0;
	cout << "����գ�" << endl;
	firstname = new char[100];
	cin.getline(firstname, 100);
	
	cout << "������֣�" << endl;
	lastname = new char[100];
	cin.getline(lastname, 100);

	cout << "��Ӧ�û�õĳɼ���" << endl;
	cin >> desgrade;
	cout << "������䣺" << endl;
	cin >> age;
	cout << "����:" << firstname << "," << lastname << endl;
	desgrade += 1;
	cout << "�ɼ���" << desgrade << endl;
	cout << "����" << age << endl;

	delete[] firstname;
	delete[] lastname;
	
	return 0;
}

int instr(){
	const int ArSize = 20;
	string name , desert;
	cout << "���������������" << endl;
	cin >> name;
	cout << "����������ϲ������㣺" << endl;
	cin >> desert;
	cout << "��Ϊ��׼����һЩ��ζ��" << desert << "," << name << endl;

	return 0;
}

int name(){
	const int ArSize = 20;
	string sfirstname, slastname,name;
	cout << "����������գ�" << endl;
	cin >> sfirstname;
	cout << "������������֣�" << endl;
	cin >> slastname;
	name = sfirstname.append(1, ',');
	name = sfirstname.append(1, ' ');
	name = name.append(slastname);
	cout << "����һ���ϳɵ�������" << name  << endl;

	char cfirstname[100], clastname[100];
	cout << "����������գ�" << endl;
	cin >> cfirstname;
	cout << "������������֣�" << endl;
	cin >> clastname;

	strcat_s(cfirstname, ", ");
	strcat_s(cfirstname, clastname);

	cout << "����������ϳɵ�������" << cfirstname << endl;
	return 0;
}

int construct(){
	CandyBar snack = { "�����", 2.3, 350 };
	cout << "�ǹ�" << snack.bell << "��������" << snack.weight << "������·����" << snack.kalori << endl;

	CandyBar mycandy[3] = { { "���������", 2.3, 350 }, { "������˹������", 5.3, 600 }, { "ʿ�����ɿ�������", 8.0, 1500 } };
	for (int i = 0; i < 3; i++){
		cout << "�ǹ�" << mycandy[i].bell << "��������" << mycandy[i].weight << "������·����" << mycandy[i].kalori << endl;
	}

	CandyBar *nwcandy = new CandyBar[3];
	for (int i = 0; i < 3; i++){
		*(nwcandy + i) = mycandy[(i + 1) % 3];
	}
	for (int i = 0; i < 3; i++){
		cout << "�ǹ�" << nwcandy[i].bell << "��������" << nwcandy[i].weight << "������·����" << nwcandy[i].kalori << endl;
	}
	delete[] nwcandy;
	return 0;
}

int WWPisa(){
	pisa mypisa;
	cout << "������������˾������:" << endl;
	cin.getline(mypisa.Name,100);
	cout << "������������ֱ�����������ÿո������" << endl;
	cin >> mypisa.R >> mypisa.Weight;
	cout << mypisa.Name << "��˾������ֱ����" << mypisa.R << "��������" << mypisa.Weight << endl;

	pisa *nwpisa = new pisa;
	cout << "������������ֱ�����������ÿո����" << endl;
	cin >> (*nwpisa).R >> (*nwpisa).Weight;
	cin.get();
	cout << "������������˾������" << endl;
	cin.getline((*nwpisa).Name, 100);
	cout << (*nwpisa).Name << "��˾������ֱ����" << (*nwpisa).R << "��������" << (*nwpisa).Weight << endl;
	
	delete[] nwpisa;
	return 0;
}

int rungrades(){
	array<double, 3> myrun;
	cout << "�������������ܲ��ĳɼ����ÿո����" << endl;
	cin >> myrun[0] >> myrun[1] >> myrun[2];
	double arvg = myrun[0] + myrun[1] + myrun[2];
	arvg /= 3;
	cout << "3���ܲ���ƽ���ɼ��ǣ�" << arvg << endl;
	return 0;
}


