#include <iostream>
using namespace std;

int main()
{
	int number, power;
	cout << "Input number: ";
	cin >> number;
	cout << "Input power: ";
	cin >> power;

	int counter = 0;
	int sum_of_powers = 1;

	while (counter < power)
	{
		sum_of_powers *= number;
		counter++;
	}

	cout << "Powered number is " << sum_of_powers;

	return 0;
}
