#include "stdafx.h"
#include "practice3-7.h"

int hightrans(){
	cout << "�����������ߣ�Ӣ�磩��" << endl;
	int highIn = 0;
	const int InPerFt = 12;
	cin >> highIn;
	int highFt = highIn / InPerFt;
	highIn %= InPerFt;
	cout << "��������" << highFt << "Ӣ��" << highIn << "Ӣ��" << endl;

	return 0;
}

int bodyBMI(){
	cout << "������������(Ӣ�ߣ������أ���������ʾ����5Ӣ��6Ӣ��200����������5 6 200����" << endl;
	int highFt = 0, highIn = 0, weightPo = 0;
	cin >> highFt >> highIn >> weightPo;
	double highMi = 0, weightKg = 0;
	highMi = (highFt * 12 + highIn)*0.0245;
	weightKg =double (weightPo) / 2.2;
	cout << "�����ߣ��ף������أ�KG���ֱ��ǣ�" << highMi << "��." << weightKg << "KG" << endl;
	
	double BMI = 0;
	cout << "�������BMIָ����" << (BMI = weightKg / (highMi*highMi)) << endl;

	return 0;
}

int latitrans(){
	cout << "������γ�ȣ�ʾ��38��20��39�룺38 20 39" << endl;
	int degrees, minutes, seconds;
	cin >> degrees >> minutes >> seconds;
	double degreesD = 0, transTemp = 0;
	const double transUnit = 60.0;
	transTemp = double(seconds) / transUnit;
	degreesD = (double(minutes) + transTemp) / transUnit;
	degreesD += (double)degrees;
	cout << "ת�����γ���ǣ�" << degreesD << endl; 
	return 0;
}

int timetrans(){
	cout << "�������룺" << endl;
	long long inseconds = 0;
	int days, hours, minutes, seconds;
	cin >> inseconds;
	const int hms = 60, dh = 24;
	long long transTemp = 0;
	transTemp = inseconds / hms;
	seconds = inseconds % hms;
	minutes = transTemp % hms;
	transTemp /= hms;
	hours = transTemp % dh;
	days = (int)(transTemp / dh);
	
	cout << "�������ʱ����ڣ�" << days << "��" << hours << "Сʱ" << minutes << "��" << seconds << "��" << endl;
	return 0;
}

int peoplerate(){
	long long globalPeo, chinaPeo;
	cout << "������ȫ���˿�������" << endl;
	cin >> globalPeo;
	cout << "�������й��˿�������" << endl;
	cin >> chinaPeo;
	double rate = double(chinaPeo)/double(globalPeo);
	cout << "�й��˿�����ռȫ���˿�������" << rate * 100 << "%." << endl;

	return 0;
}

int fuelConsumption(){
	float kL, gasL;
	cout << "��������Ĺ��������ͺģ�ʾ����200����18�����룺200 18" << endl;
	cin >> kL >> gasL;
	float fuleconsum = float(100) / kL * gasL;
	cout << "����ͺ�Ϊ�ٹ���" << fuleconsum << "L" << endl;

	return 0;
}

int consumptiontrans(){
	float kLconsum, mgconsum;
	cout << "�������ͺ�����ŷ�ޣ�L/km)��" << endl;
	cin >> kLconsum;
	float transTemp = 0;
	const float kmtom = 62.14f, gltoL = 3.875f;
	transTemp = kLconsum / gltoL;
	mgconsum = kmtom / transTemp;
	cout << "���ͺ���ת��Ϊ��������Ϊ��" << (int)mgconsum << endl;

	return 0;
}
