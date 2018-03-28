#include "Date.h"

Date::Date()
{
}

Date::~Date()
{
}

void Date::nhap()
{
	char date[11];
	do
	{
		cin.getline(date, 11);

		char delim[5] = " /-.";
		char *ptr = nullptr;

		char temp[5];
		strcpy_s(temp, strtok_s(date, delim, &ptr));
		day = atoi(temp);
		strcpy_s(temp, strtok_s(nullptr, delim, &ptr));
		month = atoi(temp);
		strcpy_s(temp, strtok_s(nullptr, delim, &ptr));
		year = atoi(temp);
	} while (!isDate(day, month, year));
}
void Date::xuat() const
{
	cout << day << "/" << month << "/" << year << endl;
}
bool isDate(int dd, int mm, int yy)
{
	if (dd < 1 && mm < 1 && yy < 1)
		return false;
	if (dd > 31)
		return false;
	if (mm > 12)
		return false;
	switch (mm)
	{
	case 4: case 6: case 9: case 11:
		if (dd > 30)
			return false;
		break;
	case 2:
		if (dd > 28)
			if (!(yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0))
				return false;
		break;
	}
	return true;
}