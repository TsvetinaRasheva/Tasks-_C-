#include <iostream>
using namespace std;

int main()
{
    int num_lenght;
    cin >> num_lenght;

    const int ARR_LENGHT = 50;

    int array_of_nums[ARR_LENGHT] = { 0 };
    int index_of_max_num = -1;
    int index_of_min_num = -1;

    for (size_t i = 0; i < num_lenght; i++)
    {
        cin >> array_of_nums[i];
    }

    int max_num = array_of_nums[0];
    int min_num = array_of_nums[0];
    
    cout << "Array is " << array_of_nums[0];

    for (size_t i = 1; i < num_lenght; i++)
    {
        if (max_num < array_of_nums[i])
        {
            max_num = array_of_nums[i];
            index_of_max_num = i;
        }

        if (min_num > array_of_nums[i])
        {
            min_num = array_of_nums[i];
            index_of_min_num = i;
        }
        cout << " "<<array_of_nums[i] ;
    }
    
    cout << "\nMax number in array is " << max_num << "\nMin number in array is " << min_num;

    cout << "\nChanged array is ";

    int change_values_num = array_of_nums[index_of_min_num];
    array_of_nums[index_of_min_num] = array_of_nums[index_of_max_num];
    array_of_nums[index_of_max_num] = change_values_num;

   
    for (size_t i = 0; i < num_lenght; i++)
    {
        cout << array_of_nums[i] << " ";
    }
    

    return 0;
}
