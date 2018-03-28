#pragma once
#include <iostream>
using namespace std;
class String
{
private:
	int length;
	char str[1000];
public:
	String();
	~String();
	void getline();
	int getLength();
	void ouput();
};

