#include "Candidate.h"



Candidate::Candidate()
{
}


Candidate::~Candidate()
{
}

void Candidate::input()
{
	cout << "Nhap ma: ";
	id.getline();
	cout << "Nhap ten: ";
	name.getline();
	cout << "Nhap ngay thang nam sinh: ";
	birthdate.nhap();
	cout << "Nhap lan luot diem toan, van, anh van: ";
	int flag = 0;
	do {
		if (flag)
			cout << "Nhap diem khong hop le, nhap lai: ";
		flag++;
		cin >> math >> lit >> eng;
	} while (math < 0 || lit < 0 || eng < 0);
	cin.ignore();
}


void Candidate::input(istream &fi)
{
	id.getline(fi);
	name.getline(fi);
	birthdate.nhap(fi);
	fi >> math >> lit >> eng;
	fi.ignore();
}
void Candidate::ouput()
{
	cout << "Ma thi sinh: ";
	id.ouput();
	cout << "Ten thi sinh: ";
	name.ouput();
	cout << "Ngay thang nam sinh: ";
	birthdate.xuat();
	cout << "Diem toan: " << math << endl;
	cout << "Diem van: " << lit << endl;
	cout << "Diem anh van: " << eng << endl;
}

float Candidate::getSumOfAllPoints()
{
	return math + lit + eng;
}
