#include <iostream>
using namespace std;
class Fraction
{
private:
	int dividend;
	int divisor;
public:
	Fraction();
	~Fraction();
	Fraction(int x, int y);
	Fraction add(const Fraction &) const;
	Fraction subtract(const Fraction &) const;
	Fraction multiply(const Fraction &) const;
	Fraction multiply(const int &) const;
	Fraction reciprocal() const;
	Fraction divide(const Fraction &) const;
	Fraction operator+(const Fraction &) const;
	void output() const;
	void input();
	float decimalValueOf();
	Fraction simplify() const;
};

