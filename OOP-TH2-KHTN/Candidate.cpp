#include "Candidate.h"



Candidate::Candidate()
{
}


Candidate::~Candidate()
{
}

void Candidate::input()
{
	cout << "Nhap ma";
	id.getline();
	cout << endl;
	cout << "Nhap ten";
	name.getline();
	cout << endl;
	cout << "Nhap ngay thang nam sinh voi dinh dang dd/mm/yyyy";
	birthdate.nhap();
	cout << endl;
	cout << "Nhap lan luot diem toan, van, anh van: ";
	cin >> math >> lit >> eng;
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
