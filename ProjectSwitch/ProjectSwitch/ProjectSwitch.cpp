// Lab4ProjectSwitch.cpp: ���������� ����� ����� ��� ����������� ����������.
//
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
	cout << "����� ����������! ����������� �������� �����������!" << endl;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "�������� ��������: 1 - ��������; 2 - ���������; 3 - ���������; 4 - �������: ";
	cin >> sw;
	while ((ficha <4) && (sw > 4) || (sw < 1))
	{

		cout << "������! ������� ����� �� 1 �� 4 ��� ��������� ������ ������ �������!" << endl;
		cout << "��������� �������: 1 - ��������; 2 - ���������; 3 - ���������; 4 -�������: ";
		cin >> sw;
		ficha++;


	}
	if (ficha = 4)
	{
		cout << "�� �����! � �� ���� � ���� ��������..." << endl;
		system("pause");
		return 0;

	}
	{

		switch (sw)
		{
		case 1:
		{
			cout << a << "+" << b << " = " << funcsplus(a, b) << endl; // ����� ���������� ������ ������� ��������
			break;
		}
		case 2: 
		{
			cout << a << "-" << b << " = " << funcsminus(a, b) << endl; // ����� ���������� ������ ������� ��������
			break;
		}
		case 3: 
		{
			cout << "���������� ���������: "  << a << "*" << b << " = " << funcsmult(a, b) << endl; // ������� ������� ���������!
			break;

		}
		case 4: 
		{
			cout << "���������� ���������: " << a << "/" << b << " = " << funcsdiv(a, b) << endl; // ������� ������� ���������!
			break;
		}

		}
		system("pause");
		return 0;
	}
}