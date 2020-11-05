#include <iostream>
using namespace std;

int main()
{
    int start_index_num, end_index_num;
    cout << "Insert index: ";
    cin >> start_index_num >> end_index_num;
    long sum = 1;

    cout << "Sum is ";

    for (size_t i = start_index_num; i <= end_index_num; i++)
    {
        sum *= i;
        cout << i;

        if(i==end_index_num)
        {
            cout << "=";
        }
        else 
        {
            cout << "*";
        }
    }

    cout << sum;

    return 0;
}
