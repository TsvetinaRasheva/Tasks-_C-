#include <iostream>
using namespace std;

int main()
{
	cout << "Insert your number: ";
	int number;
	cin >> number;

	cout << "Your row is ";
	for (int i = 1; i <= number; i++)
	{
		for (int p = 0; p < i; p++)
		{
			cout << i << " ";
		}
	}

	return 0;
}
