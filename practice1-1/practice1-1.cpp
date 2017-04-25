#include "stdafx.h"
#include "practice2-7.h"
#include "practice3-7.h"
#include "practice4-7.h"
#include "practice5-7.h"
#include "practice6-7.h"
#include "practice7-6.h"
#include "practice8-7.h"
#include "practice9-7.h"

int _tmain(){
	cout << "欢迎来到C++!你不会后悔的." << endl;
	
//	cmyname(); //编程练习2-1
//	translong();//编程练习2-2
/*	
//编程练习2-3
	coutT();
	coutT();
	coutS();
	coutS();
*/
//	yearToMonth();//编程练习2-4
//	sesToWasT();//编程练习2-5
//	transYL();//编程练习2-6
/*	int hours = 0, minutes = 0;
	cout << "请输入小时数：" << endl;
	cin >> hours;
	cout << "请输入分钟数：" << endl;
	cin >> minutes;
	showTime(hours, minutes);
	*/

	/*
	int debt = 7.2E12;
	cout << "7.2E12 =" << debt << endl;//debt在win系统编译器中显示1634811904
	*/
//	hightrans();//编程练习3-1
//	bodyBMI();//编程练习3-2
//	latitrans();//编程练习3-3
//	timetrans();//编程练习3-4
//	peoplerate();//编程练习3-5
//	fuelConsumption();//编程练习3-6
//	consumptiontrans();//编程练习3-7

//	getprint();//编程练习4-1
//	instr();//编程练习4-2
//	name();//编程练习4-3，4-4
//	construct();//编程练习4-5，4-6，4-9
//	WWPisa();//编程练习4-7,4-8
//	rungrades();//编程练习4-10
	/*
	int x = 20;
	{
		cout << x << endl;
		int x = 10;
		cout << x << endl;

	}
	cout << x << endl;
	*/
	/*
	cout << "请输入需要延迟的时间（秒）：";
	float secs;
	cin >> secs;
	while (secs!=0){
		clock_t delay = secs*CLOCKS_PER_SEC;
		cout << "开始\a" << endl;
		clock_t start = clock();
		for (int i = 1; i <= secs; i++){				
			while (clock() < start + i*CLOCKS_PER_SEC)
				;
			cout << i << "S ";
		}
		
		cout << endl << "完成" << endl;
		cout << "请输入需要延迟的时间（秒）：";
		cin >> secs;
	}
	*/

//	addall();//编程练习5-1
//	fact();//编程练习5-2
//	addeach();//编程练习5-3
//	invest();//编程练习5-4
//	sals();//编程练习5-5
//	thrsals();//编程练习5-6
//	mycar();//编程练习5-7
//	donech();//编程练习5-8
//	donestr();//编程练习5-9
//	showstar();//编程练习5-10
/*	int golf[5];
	cout << "你必须输入5个数字" << endl;
	for (int i = 0; i < 5; i++){
		cout << "第" << i + 1 << "个：";
		while (!(cin >> golf[i])){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number";
		}
	}
	int avg = 0;
	for (int i = 0; i < 5; i++){
		cout << golf[i] << " ";
		avg += golf[i];
	}
	cout << "平均分数是：" << avg / 5 << endl;
	*/
//	change();//编程练习6-1
//	donation();//编程练习6-2
//	fakemenu();//编程练习6-3
//	BOP();//编程练习6-4
//	tax();//编程练习6-5
//	showdonation();//编程练习6-6
//	vowAndcon();//编程练习6-7
//	showfile();//编程练习6-8
//	donationfile();//编程练习6-9
	/*编程练习7-1 thavg求调和平均数
	接受两个double 型参数X，Y
	返回调和平均数2.0*X*Y/(X+Y)
	*/
/*	double X = 0, Y = 0;
	cout << "请输入两个数：";
	cin >> X >> Y;
	while (X&&Y){
		double avg = thavg(X, Y);
		cout << "调和平均数avg = " << avg << endl;
		cout << "请输入两个数：";
		cin >> X >> Y;
	}
	*/
/*编程练习7-2*/
/*	const int n = 15;
	double a[n];
	int length = ingolf(a, n);
	outgolf(cavggolf(a, length));
*/

//mybox();//编程练习7-3
//	lotto();//编程练习7-4
//	test_factor();//编程练习7-5
//	test_array();//编程练习7-6
//	arrfun3();//编程练习7-7
//	arrobj();//编程练习7-8
//	test_student();//编程练习7-9
//	test_caldob();//编程练习7-10

//	test_print_str();//编程练习8-1
//	test_candybar();//编程练习8-2
//	test_up_str();//编程练习8-3
//	test_str_show();//编程练习8-4
//	test_max5();//编程练习8-5
//	test_maxn();//编程练习8-6
	
//	test_static();//编程练习9-2
//	init_chaff();//编程练习9-3
	SALES::Sales mysales1, mysales2;
	SALES::setSales(mysales1);
	const double cd[3] = { 26.5461, 512.12, 5145.01};
	SALES::setSales(mysales2, cd, 3);
	SALES::showSales(mysales1);
	SALES::showSales(mysales2);
	system("PAUSE");
	return 0;
}