#include "Fraction.h"

int gcd(int a, int b) {
	while (a*b != 0) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

Fraction::Fraction()
{
	this->dividend = 0;
	this->divisor = 1;
}

Fraction::~Fraction()
{
}

Fraction::Fraction(int x, int y)
{
	this->dividend = x;
	this->divisor = y;
}

Fraction Fraction::add(const Fraction &other) const
{
	Fraction ans;
	ans.dividend = this->dividend*other.divisor + this->divisor*other.dividend;
	ans.divisor = this->divisor * other.divisor;
	return ans;
}

Fraction Fraction::subtract(const Fraction &other) const
{
	Fraction ans;
	ans.dividend = this->dividend*other.divisor - this->divisor*other.dividend;
	ans.divisor = this->divisor * other.divisor;
	return ans;
}

Fraction Fraction::multiply(const Fraction &other) const
{
	Fraction ans;
	ans.dividend = this->dividend *other.dividend;
	ans.divisor = this->divisor * other.divisor;
	return ans;
}

Fraction Fraction::multiply(const int &i) const
{
	Fraction ans;
	ans.dividend = this->dividend * i;
	ans.divisor = this->divisor * i;
	return ans;
}

Fraction Fraction::reciprocal() const
{
	return Fraction(this->divisor, this->dividend);
}

Fraction Fraction::divide(const Fraction &other) const
{
	return this->multiply(other.reciprocal());
}

Fraction Fraction::operator+(const Fraction &other) const
{
	return this->add(other);
}

void Fraction::output() const
{
	cout << this->dividend << "/" << this->divisor << endl;
}

void Fraction::input()
{
	cout << "Nhap lan luot tu so va mau so cho phan so: ";
	cin >> this->dividend >> this->divisor;
	cin.ignore();
}

float Fraction::decimalValueOf()
{
	return float(this->dividend)/this->divisor;
}

Fraction Fraction::simplify() const
{
	int i = gcd(this->dividend, this->divisor);
	return Fraction(this->dividend / i, this->divisor / i);
}
