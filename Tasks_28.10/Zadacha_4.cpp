#include <iostream>
using namespace std;

int main()
{
	cout << "Input amount of numbers: ";
	int counter;
	cin >> counter;

	cout << "Input numbers \n";
	int sum = 0;
	bool is_zero_input = false;


	for (int i = 0; i < counter; i++)
	{
		int number;
		cin >> number;

		if (number == 0)
		{
			is_zero_input = true;
		}

		if (!is_zero_input)
		{
			sum = sum + number;
		}
	}

	if (is_zero_input)
	{
		cout << "We stopped sum you numbers, when you input 0. ";
	}

	cout << "Your sum is : " << sum;

	return 0;
}

