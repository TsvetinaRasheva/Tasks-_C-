#include <iostream>
using namespace std; 

int main()
{
	cout << "Letters are ";

	for (int i = 65; i <= 90; i++)
	{
		if (i == 65 || i == 69 || i == 73 || i == 79 || i == 85 || i == 89)
		{
			cout << (char)i << " ";
		}
	}

	return 0;
}