#pragma once

const int ArSize = 10;
void strcount(const char *str);
void test_static();
typedef struct chaff{
	char dross[20];
	int slag;
}chaff,*pchaff;
static const int BUF = 1024;
static char buffer[BUF];
void init_chaff();

namespace SALES{
	const int QUARTERS = 4;
	struct Sales{
		double sales[QUARTERS] = {0};
		double average;
		double max;
		double min;
	};
	void setSales(Sales &s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales &s);
}