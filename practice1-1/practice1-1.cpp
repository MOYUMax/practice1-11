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
	cout << "��ӭ����C++!�㲻���ڵ�." << endl;
	
//	cmyname(); //�����ϰ2-1
//	translong();//�����ϰ2-2
/*	
//�����ϰ2-3
	coutT();
	coutT();
	coutS();
	coutS();
*/
//	yearToMonth();//�����ϰ2-4
//	sesToWasT();//�����ϰ2-5
//	transYL();//�����ϰ2-6
/*	int hours = 0, minutes = 0;
	cout << "������Сʱ����" << endl;
	cin >> hours;
	cout << "�������������" << endl;
	cin >> minutes;
	showTime(hours, minutes);
	*/

	/*
	int debt = 7.2E12;
	cout << "7.2E12 =" << debt << endl;//debt��winϵͳ����������ʾ1634811904
	*/
//	hightrans();//�����ϰ3-1
//	bodyBMI();//�����ϰ3-2
//	latitrans();//�����ϰ3-3
//	timetrans();//�����ϰ3-4
//	peoplerate();//�����ϰ3-5
//	fuelConsumption();//�����ϰ3-6
//	consumptiontrans();//�����ϰ3-7

//	getprint();//�����ϰ4-1
//	instr();//�����ϰ4-2
//	name();//�����ϰ4-3��4-4
//	construct();//�����ϰ4-5��4-6��4-9
//	WWPisa();//�����ϰ4-7,4-8
//	rungrades();//�����ϰ4-10
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
	cout << "��������Ҫ�ӳٵ�ʱ�䣨�룩��";
	float secs;
	cin >> secs;
	while (secs!=0){
		clock_t delay = secs*CLOCKS_PER_SEC;
		cout << "��ʼ\a" << endl;
		clock_t start = clock();
		for (int i = 1; i <= secs; i++){				
			while (clock() < start + i*CLOCKS_PER_SEC)
				;
			cout << i << "S ";
		}
		
		cout << endl << "���" << endl;
		cout << "��������Ҫ�ӳٵ�ʱ�䣨�룩��";
		cin >> secs;
	}
	*/

//	addall();//�����ϰ5-1
//	fact();//�����ϰ5-2
//	addeach();//�����ϰ5-3
//	invest();//�����ϰ5-4
//	sals();//�����ϰ5-5
//	thrsals();//�����ϰ5-6
//	mycar();//�����ϰ5-7
//	donech();//�����ϰ5-8
//	donestr();//�����ϰ5-9
//	showstar();//�����ϰ5-10
/*	int golf[5];
	cout << "���������5������" << endl;
	for (int i = 0; i < 5; i++){
		cout << "��" << i + 1 << "����";
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
	cout << "ƽ�������ǣ�" << avg / 5 << endl;
	*/
//	change();//�����ϰ6-1
//	donation();//�����ϰ6-2
//	fakemenu();//�����ϰ6-3
//	BOP();//�����ϰ6-4
//	tax();//�����ϰ6-5
//	showdonation();//�����ϰ6-6
//	vowAndcon();//�����ϰ6-7
//	showfile();//�����ϰ6-8
//	donationfile();//�����ϰ6-9
	/*�����ϰ7-1 thavg�����ƽ����
	��������double �Ͳ���X��Y
	���ص���ƽ����2.0*X*Y/(X+Y)
	*/
/*	double X = 0, Y = 0;
	cout << "��������������";
	cin >> X >> Y;
	while (X&&Y){
		double avg = thavg(X, Y);
		cout << "����ƽ����avg = " << avg << endl;
		cout << "��������������";
		cin >> X >> Y;
	}
	*/
/*�����ϰ7-2*/
/*	const int n = 15;
	double a[n];
	int length = ingolf(a, n);
	outgolf(cavggolf(a, length));
*/

//mybox();//�����ϰ7-3
//	lotto();//�����ϰ7-4
//	test_factor();//�����ϰ7-5
//	test_array();//�����ϰ7-6
//	arrfun3();//�����ϰ7-7
//	arrobj();//�����ϰ7-8
//	test_student();//�����ϰ7-9
//	test_caldob();//�����ϰ7-10

//	test_print_str();//�����ϰ8-1
//	test_candybar();//�����ϰ8-2
//	test_up_str();//�����ϰ8-3
//	test_str_show();//�����ϰ8-4
//	test_max5();//�����ϰ8-5
//	test_maxn();//�����ϰ8-6
	
//	test_static();//�����ϰ9-2
//	init_chaff();//�����ϰ9-3
	SALES::Sales mysales1, mysales2;
	SALES::setSales(mysales1);
	const double cd[3] = { 26.5461, 512.12, 5145.01};
	SALES::setSales(mysales2, cd, 3);
	SALES::showSales(mysales1);
	SALES::showSales(mysales2);
	system("PAUSE");
	return 0;
}