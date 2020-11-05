#include <iostream>
using namespace std;

int main()
{
	cout << "Insert number: ";
	int n;
	cin >> n;

	//Горна част на диаманта
	for (int row = 0; row < n - 1; row++)
	{
		for (size_t col = n - 1; col > 0; col--)
		{
			if (row >= col)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		for (int col = 0; col < n - 1; col++)
		{
			if (col <= row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//Средна част
	for (size_t middle_row = 0; middle_row < (n * 2) - 1; middle_row++)
	{
		cout << "*";
	}

	cout << endl;

	//Долна част на диаманта
	for (int row = 0; row < n - 1; row++)
	{
		for (int col = 0; col < n - 1; col++)
		{
			if (col > row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		for (int col = n - 1; col > 0; col--)
		{
			if (col > row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}

