#include <iostream>
using namespace std;

int main()
{
	int number_of_nums;
	cout << "Insert number of nums: ";
	cin >> number_of_nums;

	int counter = 0;

	cout << "Insert only negative numbers: \n";
	int max_number;
	cin >> max_number;
	if (max_number >= 0)
	{
		cout << "Invalid input!";
		return 0;
	}


	do
	{

		int next_number;
		cin >> next_number;

		if (next_number >= 0)
		{
			cout << "Invalid input!";
			return 0;
		}

		if (max_number < next_number)
		{
			max_number = next_number;
		}

		counter++;

	} while (counter <= number_of_nums - 2);


	cout << "Max negative number is : " << max_number;

	return 0;
}
