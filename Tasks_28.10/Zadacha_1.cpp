#include <iostream>
using namespace std;

int main()
{
	int input_number;

	cout << "Input number : ";
	cin >> input_number;

	cout << "Members of row :";

	for (int i = 0; i < input_number; i++)
	{
		cout << " " << i * i + 3 * i;
	}

	return 0;
}
