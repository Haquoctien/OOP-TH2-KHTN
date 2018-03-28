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
	void output() const;
	void outputCandidatesWithTotalPointsAbove(int) const;
};

