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
		cout << "1. Сложение\n2. Вычитание\n3. Возведение в степень\n4. Выход\n";
		cin >> operation;
		if (operation == 1)
		{
			cout << "Введите первый аргумент\n";
			cin >> ar1;
			cout << "Введите второй аргумент\n";
			cin >> ar2;
			cout << "Сумма двух чисел равна" << ar1 + ar2 << endl;
		}
		if (operation == 2)
		{
			cout << "Введите первый аргумент\n";
			cin >> ar1;
			cout << "Введите второй аргумент\n";
			cin >> ar2;
			cout << "Разность двух чисел равна" << ar1 - ar2;
		}
		if (operation == 3)
		{
			cout << "Введите число \n";
			cin >> ar1;
			cout << "Введите степень \n";
			cin >> ar2;
			cout << "Результат возведения в степень " << pow(ar1, ar2);
		}
		return 0;
	}
}