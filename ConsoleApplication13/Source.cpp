#include <stdio.h>
#include <locale>
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int task = 0;
	char yn = 0;
	cout << "������� ����� ������� - ";
	cin >> task;
	switch (task)
	{
		/*case 15:
		{
			cout << "���������� �������������� ����������� �� �������� ^. ������ �������� ������������. ��������: ������ = 5, �� ������\n";
			int h;

			cout << "������� ������ ������������ - ";
			cin >> h;
			do
			{
				cout << "^" << endl;
				
				h -= 1;

			} while (h >= 0);


		}break;*/

#pragma region TASK14
		case 14:
		{
		task14:
			cout << "���������� ����������� ��� �������� ����� ����� � ���������, ������� ����� ������������ � ����������\n";
			cout << "������ ����� ������ ���� ������ �������!!!\n";
			int a, b;
			cout << "������� ������ ����� - ";
			cin >> a;
			cout << "\n������� ������ ����� - ";
			cin >> b;
			if (a < b)
			{
				while (a <= b)
				{
					if (a % 2 != 0)
					{
						cout << a << endl;
						a += 1;
					}
					else
					{
						a += 1;
					}
				}
			}
			else
			{
				cout << "�������� ����� �� �������������� �������\n";
				goto task14;
			}
		} break;
#pragma endregion

#pragma region TASK 13
		case 13:
		{	

		/*���������: ���������� �������� ���������� - �������, ������� ����� ������� ���������� ��������� �����, � ����������, ������� ����� ����������� ����� ����� �����.*/

			cout << "������������ ������������ ���� ����� � ����������, ���� ������������ �� ����� 0.\n";
			cout << "����� ����� ����, �������� �� ����� ���������� �����, ������� ���� �������, �� ����� ����� � ������� ��������������\n"; 
			int a, b = 0, c = 0, d = 0;
			do
			{
				cout << "������� ����� - ";
				cin >> a;
				b += 1;
				c = c + a;
				d = c / 2;


			} while (a != 0);
			cout << "������� ���������� ����� - " << b << "\n����� ����� ���� ����� - " << c << "\n������� �������������� - " << d << endl;

		}
#pragma endregion

#pragma region TASK 12
		case 12:
		{

			cout << "�����\n";
			cout << "a.������������ ���� ����� ����� �� 8 �� 15;\n";
			cout << "b.������������ ���� ����� ����� �� a �� 20 (�������� a �������� � ����������; 1 <= a <= 20);\n";
			cout << "c.������������ ���� ����� ����� �� 1 �� b(�������� b �������� � ����������; 1 <= b <= 20);\n";
			cout << "d.������������ ���� ����� ����� �� a �� b(�������� a � b �������� � ����������; b >= a).\n";
			cout << "�������� ���� �� ���� ������� - ";
			char task12 = 0;
			cin >> task12;
			switch (task12)
			{
				case 'a':
				{
					system("cls");
					cout << "����� ������������ ���� ����� ����� �� 8 �� 15;\n";
					double a = 8, i = 8;
					while (i<=15)
					{
						a = a * i;
						i = i + 1;
					}
					cout << a << endl;

				} break;
				case 'b':
				{	
					task12b:
					system("cls");
					cout << "����� ������������ ���� ����� ����� �� a �� 20 (�������� a �������� � ����������; 1 <= a <= 20);\n";
					double a;
					cout << "������� �������� �, ������� ������ 0 � ������ 20 - ";
					cin >> a;
					if (a >= 1 && a <= 20)
					{
						double i = a;
						while (i <= 20)
						{
							a *= i;
							i += 1;
							cout << a << endl;
						}
						cout << a << endl;
					}
					else
					{
						cout << "ERRORORORORRRRRR\n";
						goto task12b;
					}
				} break;
				case 'c':
				{
					system("cls");
					cout << "����� ������������ ���� ����� ����� �� 1 �� b(�������� b �������� � ����������; 1 <= b <= 20);\n";
					/*int b;
					cout << "������� �����, ������� ������ 0 �� ������ 20 - ";
					cin >> b;
					if (b >= 1 && b <= 20)
					{	
						int i = b;
						while (true)
						{

						}
					}*/
				}
			
			}

		}
#pragma endregion

#pragma region TASK 11

#pragma endregion

		
	}
	

}