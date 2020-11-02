#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	bool has_one = false;

	while (number > 0)
	{
		if ((number % 10 ) == 1)
		{
			has_one = true;
			break;
		}
		number /= 10;
	}

	if (has_one)
	{
		cout << "YES.";
	}
	else
	{
		cout << "NO. ";
	}

	return 0;
}

