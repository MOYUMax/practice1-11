
#pragma once
#include "practice4-7.h"
static int print_str_num = 0;

int print_str(char * str, int n = 0);
void test_print_str();
void set_candybar(CandyBar & mycandy, char * SetBell = "Millennium Munch", double SetWeight = 2.85, int SetKalori = 350);
void show_candybar(const CandyBar & mycandy);
void test_candybar();
void upper_string(string & instring);
void test_up_str();
struct stringy{
	char *str;
	int ct;
};
void set(stringy & beany, const char * istr);
void show(const stringy stry, int pt = 1);
void show(const char * str, int pt = 1);
void test_str_show();

template <typename T>
T max5(T myt[]);
void test_max5();

template <typename T>
T maxn(const T myt[], int n);

typedef char * pc;
//模板具体化
template <> pc maxn<pc>(const pc strpt[], int n);
void test_maxn();