#include "stdafx.h"
#include "practice5-7.h"


int addall(){
	cout << "请输入两个整数：";
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
	cout << a << "和" << b << "的和是" << ansab << endl;

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
		cout << "请输入一个数字：";
		cin >> i;
		ansi += i;
	}
	cout << "你输入的总和是：" << ansi << endl;

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
	cout << year << "年以后，Cleo的投资价值超过了Daphne，分别是：" << Cleo << "(Cleo) " << Daphne << "(Daphne)" << endl;
	return 0;
}

int sals(){
//	char *month[13] = {"一","二","三","四","五","六","七","八","九","十","十一","十二"};
	int number[13] = {0};
	string month[13] = { "一", "二", "三", "四", "五", "六", "七", "八", "九", "十", "十一", "十二" };

	for (int i = 0; i < 12; i++){
		cout << "请输入" << month[i] << "月《C++ for Fools》的销售量（本）：";
		cin >> number[i];
		number[12] += number[i];
	}
	cout << "该书全年的销售量是" << number[12] << endl;
	return 0;
}
int thrsals(){
	int number[3][13] = { { 0 } },year = 0,allsal = 0;
	string month[13] = { "一", "二", "三", "四", "五", "六", "七", "八", "九", "十", "十一", "十二" };
	for (int i = 0; i < 3; i++){
		year = i + 1;
		for (int j = 0; j < 12; j++)
		{
			cout << "请输入第" << year << "年" << month[j] << "月" << "的销售量：";
			cin >> number[i][j];
			number[i][12] += number[i][j];
		}
		cout << "第" << year << "年的销售量总和是" << number[i][12] << endl;
		allsal += number[i][12];
	}
	cout << "三年的销售总量是" << allsal << endl;
	return 0;
}

int mycar(){
	cout << "请问你希望输入多少量车到库里？";
	int n = 0;
	cin >> n;
	car *logcata = new car[3];
	for (int i = 0; i < n; i++){
		cout << i+1 << "号车：" << endl << "请输入生产商：";
		cin >> logcata[i].company;
		cout << "请输入车制造年份：";
		cin >> logcata[i].cropyear;
	}
	cout << "下面是你的车的信息：" << endl;
	for (int i = 0; i < n; i++){
		cout << logcata[i].cropyear << " " << logcata[i].company << endl;
	}

	return 0;
}
int donech(){
	int max = 100,count = 0;
	char *input =new char[max];
	cout << "请输入几个单词";
	do{
		cin >> input;
		char temp;
		cin.get(temp);
		count++;
	} while (strcmp(input, "done"));
	cout << "在done以前，你一共输入了" << count-1 << "个单词" << endl;
	return 0;
}
int donestr(){
	string input;
	int count = 0;
	cout << "请输入几个单词";
	do{
		cin >> input;
		char temp;
		cin.get(temp);
		count++;
	} while (input != "done");
	cout << "在done 以前，你一共输入了" << count - 1 << "个单词" << endl;
	return 0;
}
int showstar(){
	cout << "请输入你要显示的行数：";
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
