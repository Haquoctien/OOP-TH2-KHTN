#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
	this->real = 0;
	this->imaginary = 0;
}

ComplexNumber::ComplexNumber(float real, float imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}


ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::output() const
{
	if (imaginary != 0)
		cout << real << (imaginary > 0 ? " +" : "") << imaginary << endl;
	else
		cout << real;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &other) const
{
	return ComplexNumber(this->real + other.real, this->imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &other) const
{
	return ComplexNumber(this->real - other.real, this->imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::conjugate() const
{
	return ComplexNumber(this->real, -(this->imaginary));
}
