#include <iostream>
#include <Windows.h>
#include "uzly.h"
#include "ravn_uzly.h"
using namespace std;

void print(const uzly &object)
{
    int n = object.get_n();
	double a = object.get_a();
	double b = object.get_b();
	for (int i = 0; i < n; i++)
	{
		cout << object[i] << " ";
	}
	cout << "\n";
}

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ravn_uzly object(0, 4, 9);
	print(object);
	system("pause");
}