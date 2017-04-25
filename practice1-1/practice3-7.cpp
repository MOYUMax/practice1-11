#include "stdafx.h"
#include "practice3-7.h"

int hightrans(){
	cout << "请输入你的身高（英寸）：" << endl;
	int highIn = 0;
	const int InPerFt = 12;
	cin >> highIn;
	int highFt = highIn / InPerFt;
	highIn %= InPerFt;
	cout << "你的身高是" << highFt << "英尺" << highIn << "英寸" << endl;

	return 0;
}

int bodyBMI(){
	cout << "请输入你的身高(英尺）和体重（磅）。（示例，5英尺6英寸200磅，则输入5 6 200）：" << endl;
	int highFt = 0, highIn = 0, weightPo = 0;
	cin >> highFt >> highIn >> weightPo;
	double highMi = 0, weightKg = 0;
	highMi = (highFt * 12 + highIn)*0.0245;
	weightKg =double (weightPo) / 2.2;
	cout << "你的身高（米）和体重（KG）分别是：" << highMi << "米." << weightKg << "KG" << endl;
	
	double BMI = 0;
	cout << "你的身体BMI指数是" << (BMI = weightKg / (highMi*highMi)) << endl;

	return 0;
}

int latitrans(){
	cout << "请输入纬度，示例38度20分39秒：38 20 39" << endl;
	int degrees, minutes, seconds;
	cin >> degrees >> minutes >> seconds;
	double degreesD = 0, transTemp = 0;
	const double transUnit = 60.0;
	transTemp = double(seconds) / transUnit;
	degreesD = (double(minutes) + transTemp) / transUnit;
	degreesD += (double)degrees;
	cout << "转换后的纬度是：" << degreesD << endl; 
	return 0;
}

int timetrans(){
	cout << "请输入秒：" << endl;
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
	
	cout << "你输入的时间等于：" << days << "天" << hours << "小时" << minutes << "分" << seconds << "秒" << endl;
	return 0;
}

int peoplerate(){
	long long globalPeo, chinaPeo;
	cout << "请输入全球人口总数：" << endl;
	cin >> globalPeo;
	cout << "请输入中国人口总数：" << endl;
	cin >> chinaPeo;
	double rate = double(chinaPeo)/double(globalPeo);
	cout << "中国人口总数占全球人口总数的" << rate * 100 << "%." << endl;

	return 0;
}

int fuelConsumption(){
	float kL, gasL;
	cout << "请输入你的公里数和油耗（示例：200公里18升输入：200 18" << endl;
	cin >> kL >> gasL;
	float fuleconsum = float(100) / kL * gasL;
	cout << "你的油耗为百公里" << fuleconsum << "L" << endl;

	return 0;
}

int consumptiontrans(){
	float kLconsum, mgconsum;
	cout << "请输入油耗量（欧洲，L/km)：" << endl;
	cin >> kLconsum;
	float transTemp = 0;
	const float kmtom = 62.14f, gltoL = 3.875f;
	transTemp = kLconsum / gltoL;
	mgconsum = kmtom / transTemp;
	cout << "将油耗量转换为美国方法为：" << (int)mgconsum << endl;

	return 0;
}
