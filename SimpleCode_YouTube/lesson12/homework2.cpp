#include <iostream>

using namespace std;

int main()
{
	cout << "Введите число: " << endl;
	int number;
	cin >> number;

	if (number % 2 == 0)
	{
	cout << number << " - чётное" << endl; 
	}
	else
	{
	cout << number << " - нечётное" << endl;
	}
}
