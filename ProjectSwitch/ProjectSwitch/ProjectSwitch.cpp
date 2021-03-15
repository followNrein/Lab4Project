// Lab4ProjectSwitch.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "funcs.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sw;
	double a, b;
	cout << "Добро пожаловать! Внимательно следуйте инструкциям!" << endl;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите действие: 1 - сложение; 2 - вычитание; 3 - умножение; 4 - деление: ";
	cin >> sw;
	{

		switch (sw)
		{
		case 1:
		{
			cout << a << "+" << b << " = " << funcsplus(a, b) << endl; // вывод результата работы функции сложения
			break;
		}
		case 2: 
		{
			cout << a << "-" << b << " = " << funcsminus(a, b) << endl; // вывод результата работы функции сложения
			break;
		}
		case 3: 
		{
			cout << "Полученное выражение: "  << a << "*" << b << " = " << funcsmult(a, b) << endl; // добавил функцию умножения!
			break;

		}
		case 4: 
		{
			cout << "Полученное выражение: " << a << "/" << b << " = " << funcsdiv(a, b) << endl; // добавил функцию умножения!
			break;
		}

		}
		system("pause");
		return 0;
	}
}