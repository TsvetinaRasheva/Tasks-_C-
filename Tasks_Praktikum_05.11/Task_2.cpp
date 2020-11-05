#include <iostream>
using namespace std;

int main()
{
    int num_lenght;
    cin >> num_lenght;
    
    const int ARR_LENGHT = 50;

    int array_of_nums[ARR_LENGHT] = {0};
   
    for (size_t i = 0; i < num_lenght; i++)
    {
       cin >> array_of_nums[i];
    } 
    
    int max_num = array_of_nums[0];
    int min_num = array_of_nums[0];

    for (size_t i = 1; i < num_lenght; i++)
    {
        if (max_num < array_of_nums[i])
        {
            max_num = array_of_nums[i];
        }

        if (min_num > array_of_nums[i])
        {
            min_num = array_of_nums[i];
        }
    }

    cout << "Max number in array is " << max_num <<"\nMin number in array is " << min_num;
   
}
