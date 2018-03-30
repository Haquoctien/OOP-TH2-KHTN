#pragma once
#include <iostream>
#include <fstream>
using namespace std;
bool isDate(int, int, int);
class Date
{
private:
	int day, month, year;
public:
	Date();
	~Date();
	void nhap();
	void nhap(istream &);
	void xuat() const;
};

