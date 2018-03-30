#include "TestCandidate.h"
#include <fstream>
int main() {
	cout << "Neu muon nhap tu file co san, nhap 1, neu muon nhap tu ban phim, nhap 0: ";
	int choice;
	cin >> choice;
	cin.ignore();
	TestCandidate myCandidates;
	if (choice) {
		cout << "Nhap tu file..." << endl;
		ifstream fi("file.txt");
		if (!fi.is_open()) {
			cout << "Khong doc duoc file";
			system("pause");
			return 1;
		}
		myCandidates.input(fi);
		fi.close();
	}
	else {
		cout << "Moi nhap tu ban phim" << endl;
		myCandidates.input();
	}
	myCandidates.output();
	myCandidates.output(15);
	system("pause");
	return 0;
}