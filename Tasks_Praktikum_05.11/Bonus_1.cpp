#include <iostream>
using namespace std;

int main()
{
	cout << "Insert number: ";
	int n;
	cin >> n;
	
	//Първи ред 
	for (size_t start_cols = 0; start_cols < n; start_cols++)
	{
		cout << "*";
	}

	cout << endl;

	//Горна част на диаманта
	for (int row = 1; row <= n / 3; row++)
	{
		//Лява част
		for (int col = 0; col < (n + 1) / 2; col++)
		{

			if (col == row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		//Дясна част
		for (int col = ((n + 1) / 2) - 2; col > 0; col--)
		{
			if (col == row)
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
	for (size_t middle_row = 1; middle_row <= n; middle_row++)
	{
		if (middle_row == (n + 1) / 2)
		{
			cout << "*";
		}
		else
		{
			cout << " ";
		}
	}

	cout << endl;

	//Долна част на диаманта
	for (int row = n/3; row >= 1; row--)
	{
		//Лява част
		for (int col = 0; col < (n + 1) / 2; col++)
		{
			if (col == row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		//Дясна част
		for (int col = ((n + 1) / 2)-2; col >= 1; col--)
		{
			if (col == row)
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
	
	//Последен ред 
	for (size_t start_cols = 0; start_cols < n; start_cols++)
	{
		cout << "*";
	}

	return 0;
}
