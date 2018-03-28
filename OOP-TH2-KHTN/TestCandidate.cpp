#include "TestCandidate.h"



TestCandidate::TestCandidate()
{
	list = NULL;
	numberOfCandidates = 0;
}


TestCandidate::~TestCandidate()
{
	if (list != NULL)
		delete[] list;
}

void TestCandidate::input()
{
	do {
		cout << "Nhap so thi sinh can nhap: ";
		cin >> numberOfCandidates;
	} while (numberOfCandidates <= 0);
	if (list != NULL)
		delete[] list;
	list = new Candidate[numberOfCandidates];
	for (int i = 0; i < numberOfCandidates; i++)
	{
		list[i].input();
	}
}

void TestCandidate::output() const
{
	for (int i = 0; i < numberOfCandidates; i++)
		list[i].ouput();
}

void TestCandidate::outputCandidatesWithTotalPointsAbove(int totalPoints) const
{
	for (int i = 0; i < numberOfCandidates; i++)
	{
		if (list[i].getSumOfAllPoints() > totalPoints)
			list[i].ouput();
}
