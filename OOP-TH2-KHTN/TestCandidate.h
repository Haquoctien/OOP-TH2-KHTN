#pragma once
#include "Candidate.h"
class TestCandidate
{
private:
	Candidate * list;
	int numberOfCandidates;
public:
	TestCandidate();
	~TestCandidate();
	void input();
	void input(istream &);
	void output() const;
	void output(int) const;
};

