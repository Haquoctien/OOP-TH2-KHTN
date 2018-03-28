#include "String.h"


String::String()
{
	length = 0;
}


String::~String()
{
}

void String::getline()
{
	char c = ' ';
	while (c != '\n') {
		c = getchar();
		str[length++] = c;
	}
	str[length] = '\0';
}

int String::getLength()
{
	return length;
}

void String::ouput()
{
	cout << str << endl;
}
