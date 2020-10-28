#include <iostream>
using namespace std;

int main()
{
	cout << "Insert number: ";
	int n;
	cin >> n;

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (col < row)
			{
				cout << "-";
			}
			else if (col == row)
			{
				cout << "0";
			}
			else
			{
				cout << "+";
			}
		}
		cout << endl;
	}

	return 0;

}

