#pragma once
#include "String.h"
#include "Date.h"
class Candidate
{
private:
	String id, name;
	Date birthdate;
	float math, lit, eng;
public:
	Candidate();
	~Candidate();
	void input();
	void input(istream &);
	void ouput();
	float getSumOfAllPoints();
};

