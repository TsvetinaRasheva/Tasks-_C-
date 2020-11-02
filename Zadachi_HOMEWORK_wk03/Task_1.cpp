#include <iostream>

using namespace std;

int main()
{
	int number1, number2;
	int result = 0;
	int counter_of_digits = 0;
	int result_for_counting_digits = 0;

	cout << "Insert two numbers: ";
	cin >> number1 >> number2;

	if ((number1 % 100) < 0 || (number1 % 100) > 59 ||
		(number1 / 100) < 0 || (number1 / 100) > 23 ||
		(number2 % 100) < 0 || (number2 % 100) > 59 ||
		(number2 / 100) < 0 || (number2 / 100) > 23)
	{
		cout << "Invalid!";
		return 0;
	}

	if (number1 > number2)
	{
		if ((number2 / 1000) == 0)
		{
			result = (number1 % 1000) - (number2 % 1000);
		}
		else
		{
			result = number1 - number2;
		}
	}
	else
	{
		result = number2 - number1;
	}

	result_for_counting_digits = result;

	while (result_for_counting_digits > 0)
	{
		result_for_counting_digits /= 10;
		counter_of_digits++;
	}

	if (counter_of_digits == 3)
	{
		cout << "Diff is 0" << result;
	}
	else
	{
		cout << "Diff is " << result;
	}
	return 0;
}