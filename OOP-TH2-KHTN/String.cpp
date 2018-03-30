#include "String.h"


String::String()
{
	length = 0;
	str = NULL;
}


String::~String()
{
	if (str != NULL)
		delete[] str;
}

void String::getline()
{
	char buffer[1000];
	char c = ' ';
	length = 0;
	while (c != '\n') {
		c = getchar();
		buffer[length++] = c;
		if (length >= 999) {
			cout << "Buffer overflow, please re-enter a shorter string: ";
			length = 0;
			cin.ignore();
		}
	}
	buffer[length-1] = '\0';
	str = strdup(buffer);
}

void String::getline(istream &file)
{
	char buffer[1000];
	char c[1];
	length = 0;
	while (c[0] != '\n') {
		file.read(c, 1);
		buffer[length++] = c[0];
	}
	buffer[length - 1] = '\0';
	str = strdup(buffer);
}

int String::getLength()
{
	return length;
}

void String::ouput()
{
	cout << str << endl;
}
