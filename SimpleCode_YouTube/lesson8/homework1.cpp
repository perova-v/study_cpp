#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Введите три числа: " << endl;
	cin >> a >> b >> c;

	cout << "Их сумма:" << a+b+c << endl;
	cout << "Их произведение:" << a*b*c << endl;
	cout << "Их среднее арифметическое:" << (double)(a+b+c)/3 << endl;
}
