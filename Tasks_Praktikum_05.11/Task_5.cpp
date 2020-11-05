#include <iostream>
using namespace std;

int main()
{
	cout << "Insert array lenght : ";
	int num_lenght;
	cin >> num_lenght;

	const int ARR_LENGHT = 100;
	int array_of_nums[ARR_LENGHT] = { 0 };
		
	for (size_t i = 0; i < num_lenght; i++)
	{
		cin >> array_of_nums[i];
	}

	int n = num_lenght - 1;
	
	cout << "New row is ";

	do {
		cout << array_of_nums[n] << " ";
		n--;
	} while (n!=-1);


	


}
