#include "stdafx.h"
#include "practice4-7.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>

int getprint(){
	char * firstname, *lastname, desgrade;
	int age = 0;
	cout << "你的姓：" << endl;
	firstname = new char[100];
	cin.getline(firstname, 100);
	
	cout << "你的名字：" << endl;
	lastname = new char[100];
	cin.getline(lastname, 100);

	cout << "你应该获得的成绩：" << endl;
	cin >> desgrade;
	cout << "你的年龄：" << endl;
	cin >> age;
	cout << "姓名:" << firstname << "," << lastname << endl;
	desgrade += 1;
	cout << "成绩：" << desgrade << endl;
	cout << "年龄" << age << endl;

	delete[] firstname;
	delete[] lastname;
	
	return 0;
}

int instr(){
	const int ArSize = 20;
	string name , desert;
	cout << "请输入你的姓名：" << endl;
	cin >> name;
	cout << "请输入你最喜欢的甜点：" << endl;
	cin >> desert;
	cout << "我为你准备了一些美味的" << desert << "," << name << endl;

	return 0;
}

int name(){
	const int ArSize = 20;
	string sfirstname, slastname,name;
	cout << "请输入你的姓：" << endl;
	cin >> sfirstname;
	cout << "请输入你的名字：" << endl;
	cin >> slastname;
	name = sfirstname.append(1, ',');
	name = sfirstname.append(1, ' ');
	name = name.append(slastname);
	cout << "这是一个合成的姓名：" << name  << endl;

	char cfirstname[100], clastname[100];
	cout << "请输入你的姓：" << endl;
	cin >> cfirstname;
	cout << "请输入你的名字：" << endl;
	cin >> clastname;

	strcat_s(cfirstname, ", ");
	strcat_s(cfirstname, clastname);

	cout << "这是用数组合成的姓名：" << cfirstname << endl;
	return 0;
}

int construct(){
	CandyBar snack = { "大白兔", 2.3, 350 };
	cout << "糖果" << snack.bell << "的重量是" << snack.weight << "，它卡路里是" << snack.kalori << endl;

	CandyBar mycandy[3] = { { "大白兔奶糖", 2.3, 350 }, { "阿尔卑斯棒棒糖", 5.3, 600 }, { "士力架巧克力奶糖", 8.0, 1500 } };
	for (int i = 0; i < 3; i++){
		cout << "糖果" << mycandy[i].bell << "的重量是" << mycandy[i].weight << "，它卡路里是" << mycandy[i].kalori << endl;
	}

	CandyBar *nwcandy = new CandyBar[3];
	for (int i = 0; i < 3; i++){
		*(nwcandy + i) = mycandy[(i + 1) % 3];
	}
	for (int i = 0; i < 3; i++){
		cout << "糖果" << nwcandy[i].bell << "的重量是" << nwcandy[i].weight << "，它卡路里是" << nwcandy[i].kalori << endl;
	}
	delete[] nwcandy;
	return 0;
}

int WWPisa(){
	pisa mypisa;
	cout << "请输入披萨公司的名称:" << endl;
	cin.getline(mypisa.Name,100);
	cout << "请输入披萨的直径和重量，用空格隔开：" << endl;
	cin >> mypisa.R >> mypisa.Weight;
	cout << mypisa.Name << "公司的披萨直径是" << mypisa.R << "，重量是" << mypisa.Weight << endl;

	pisa *nwpisa = new pisa;
	cout << "请输入披萨的直径和重量，用空格隔开" << endl;
	cin >> (*nwpisa).R >> (*nwpisa).Weight;
	cin.get();
	cout << "请输入披萨公司的名称" << endl;
	cin.getline((*nwpisa).Name, 100);
	cout << (*nwpisa).Name << "公司的披萨直径是" << (*nwpisa).R << "，重量是" << (*nwpisa).Weight << endl;
	
	delete[] nwpisa;
	return 0;
}

int rungrades(){
	array<double, 3> myrun;
	cout << "请输入你三次跑步的成绩，用空格隔开" << endl;
	cin >> myrun[0] >> myrun[1] >> myrun[2];
	double arvg = myrun[0] + myrun[1] + myrun[2];
	arvg /= 3;
	cout << "3次跑步的平均成绩是：" << arvg << endl;
	return 0;
}


