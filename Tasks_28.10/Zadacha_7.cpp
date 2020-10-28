#include <iostream>
using namespace std;

int main()
{
	cout << "Input number : ";
	int number;
	cin >> number;
	bool isSimple = true;

	for (int i = 2; i <= number - 1; i++)
	{
		if (number % i == 0)
		{
			isSimple = false;
			break;
		}

	}

	if (isSimple)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}

