#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>


using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int *str;
	int count;
	cout << "Enter the element: ";
	cin >> count;
	str = new int[count];
	for (int i = 0; i < count; i++) {
		cout << "Mas[" << i + 1 << "]=";
		cin >> str[i];
	}

	for (int i = 0; i < count; i++) {
		if (check_polindrom(str[i]))
		{
			cout << "Element is polindrom.";
		}
		else
		{
			cout << "Element is not polindrom";
		}
	}
	return 0;
}