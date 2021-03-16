// Lab4ProjectSwitch.cpp: определяет точку входа для консольного приложения.
// Released 1.0
#include "stdafx.h"
#include "funcs.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sw, ficha;
	ficha = 1;
	double a, b;
	cout << "Добро пожаловать! Внимательно следуйте инструкциям!" << endl;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите действие: 1 - сложение; 2 - вычитание; 3 - умножение; 4 - деление: ";
	cin >> sw;
	while ((ficha <5) && (sw > 4) || (sw < 1))
	{
		if (ficha == 4)
		{
			system("cls");
			cout << "Количество попыток исчерпано! Попробуйте в другой раз!" << endl;
			system("pause");
			return 0;

		}
		system("cls");
		cout << "Осталось попыток: " << 4 - ficha << endl;
		cout << "Ошибка! Введите число от 1 до 4 для успешного выбора нужной функции!" << endl;
		cout << "Доступные функции: 1 - сложение; 2 - вычитание; 3 - умножение; 4 -деление: ";
		cin >> sw;
		ficha++;


	}
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