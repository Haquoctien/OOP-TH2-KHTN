#pragma once
#include <iostream>
#include <cstdio>
#define strdup _strdup
using namespace std;
class String
{
private:
	int length;
	char *str;
public:
	String();
	String(const String&);
	~String();
	void getline(istream&);
	void getline();
	int getLength();
	void ouput();
};

