#include <iostream> 
#include <string> 
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	short operation;
	double ar1, ar2;
	while (operation != 4)
	{
		cout << "1. ��������\n2. ���������\n3. ���������� � �������\n4. �����\n";
		cin >> operation;
		if (operation == 1)
		{
			cout << "������� ������ ��������\n";
			cin >> ar1;
			cout << "������� ������ ��������\n";
			cin >> ar2;
			cout << "����� ���� ����� �����" << ar1 + ar2 << endl;
		}
		if (operation == 2)
		{
			cout << "������� ������ ��������\n";
			cin >> ar1;
			cout << "������� ������ ��������\n";
			cin >> ar2;
			cout << "�������� ���� ����� �����" << ar1 - ar2;
		}
		if (operation == 3)
		{
			cout << "������� ����� \n";
			cin >> ar1;
			cout << "������� ������� \n";
			cin >> ar2;
			cout << "��������� ���������� � ������� " << pow(ar1, ar2);
		}
		return 0;
	}
}