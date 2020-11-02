#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	cout << "Input two numbers: ";
	cin >> number1 >> number2;
	bool is_possible = false;

	for (int i = 2; i < number1; i++)
	{
		if (number1 % i == 0)
		{
			if (number2%(i*i) == 0)
			{
				is_possible = true;
			}
		}
	}

	if (is_possible)
	{
		cout << "YES!";
	}
	else
	{
		cout << "NO!";
	}

	return 0;
}
