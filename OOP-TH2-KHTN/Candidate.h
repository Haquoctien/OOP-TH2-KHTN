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
	void ouput();
	float getSumOfAllPoints();
};

