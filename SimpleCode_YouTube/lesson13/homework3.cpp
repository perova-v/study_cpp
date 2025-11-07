#include <iostream>

using namespace std;

int main()
{
	cout << "Введите два числа: " << endl;
	int n1, n2;
	cin >> n1 >> n2;
	cout << "Выберете математическую операцию: " << endl;
	cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление" << endl;
	int op;
	cin >> op;

	switch (op)
	{
	case 1:
	{
		cout << "Результат сложения: " << n1+n2 << endl;
	}
	break;

	case 3:
        {
                cout << "Результат умножения: " << n1*n2 << endl;
        }
        break;

	case 4:
        {
                cout << "Результат деления: " << (double)n1/n2 << endl;
        }
        break;

	case 2:
        {
                cout << "Результат вычитания: " << n1-n2 << endl;
        }
        break;

	default:
	{
		cout << "Ошибка! Нет такой операции!" << endl;
	}
	break;
	}
}
