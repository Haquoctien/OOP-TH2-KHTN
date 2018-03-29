#pragma once
#include <iostream>
using namespace std;
class ComplexNumber
{
private:
	float real;
	float imaginary;
public:
	ComplexNumber();
	ComplexNumber(float, float);
	~ComplexNumber();
	void output() const;
	ComplexNumber operator+(const ComplexNumber &) const;
	ComplexNumber operator-(const ComplexNumber &) const;
	ComplexNumber operator*(const ComplexNumber &) const;
	ComplexNumber conjugate() const;
};

