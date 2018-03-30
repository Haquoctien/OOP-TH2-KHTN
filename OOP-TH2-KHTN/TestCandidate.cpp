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
	cout << "\n\t**********\n";
	do {
		cout << "Nhap so thi sinh can nhap: ";
		cin >> numberOfCandidates;
	} while (numberOfCandidates <= 0);
	cin.ignore();
	if (list != NULL)
		delete[] list;
	list = new Candidate[numberOfCandidates];
	for (int i = 0; i < numberOfCandidates; i++)
	{
		cout << "#" << i + 1 << endl;
		list[i].input();
	}
}

void TestCandidate::input(istream &fi)
{
	fi >> numberOfCandidates;
	fi.ignore();
	if (list != NULL)
		delete[] list;
	list = new Candidate[numberOfCandidates];
	for (int i = 0; i < numberOfCandidates; i++)
	{
		list[i].input(fi);
	}
}

void TestCandidate::output() const
{
	cout << "\n\t**********\n";
	cout << "Da nhap " << numberOfCandidates << " thi sinh: " << endl;
	for (int i = 0; i < numberOfCandidates; i++) {
		cout << "#" << i+1 << endl;
		list[i].ouput();
	}
}

void TestCandidate::output(int totalPoints) const
{
	cout << "\n\t**********\n";
	cout << "Thi sinh co diem tren " << totalPoints << ":" << endl;
	for (int i = 0, j = 1; i < numberOfCandidates; i++)
	{
		if (list[i].getSumOfAllPoints() > totalPoints) {
			cout << "#" << j++ << endl;
			list[i].ouput();
		}
	}
	cout << endl;
}
