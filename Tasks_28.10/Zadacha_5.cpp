#include <iostream>
using namespace std;

int main()
{
	cout << "Input number : ";
	int number;
	cin >> number;
	int sum_of_digits = 0;

	do
	{
		sum_of_digits += (number % 10);
		number = number / 10;

	} while (number % 10 != 0);

	cout << "Sum is " << sum_of_digits;
	
	return 0;
}

