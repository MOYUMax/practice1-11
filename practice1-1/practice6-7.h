#pragma once
#include <cstdlib>
#include <array>
#include <string>
#include <fstream>
int change();
int donation();
int fakemenu();

const int strsize = 100; 

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;// 0 = fullname,1 = title,2 = bopname
};

int BOP();

int tax();

struct patrons{
	string namepats;
	double donation;
};
int showdonation();
int vowAndcon();
int showfile();
int donationfile();