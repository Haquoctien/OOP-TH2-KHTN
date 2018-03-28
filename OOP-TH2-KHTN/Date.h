#pragma once
#include <iostream>
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
	void xuat() const;
};

