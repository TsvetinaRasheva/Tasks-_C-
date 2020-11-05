#include <iostream>
using namespace std;

int main()
{
	cout << "Insert array lenght : ";
	int num_lenght;
	cin >> num_lenght;

	const int ARR_LENGHT = 50;
	int array_of_nums[ARR_LENGHT] = { 0 };
	int mirror_array[ARR_LENGHT] = { 0 };
	int count_true=0;

	cout << "Insert elements \n";

	for (size_t i = 0; i < num_lenght; i++)
	{
		cin >> array_of_nums[i];
	}

	int index_origin_arr = num_lenght - 1;
	int index_mirror_arr = 0;
	
	do {
	   mirror_array[index_mirror_arr]=array_of_nums[index_origin_arr];
		index_origin_arr--;
		index_mirror_arr++;
	} while (index_origin_arr != -1);
	
	for (size_t i = 0; i < num_lenght; i++)
	{
		if (array_of_nums[i] == mirror_array[i])
		{
			count_true++;
		}
	}

	if (count_true == num_lenght)
	{
		cout << "YES! ";
	}
	else
	{
		cout << "NO!";
	}

	cout << "\nOrigin array ";
	for (size_t i = 0; i < num_lenght; i++)
	{
		cout << array_of_nums[i] << " ";
	}

	cout << "\nMirror array ";
	for (size_t i = 0; i < num_lenght; i++)
	{
		cout << mirror_array[i] << " ";
	}

	return 0;
}
