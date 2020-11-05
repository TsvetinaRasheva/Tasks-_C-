#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
       
    int sum = 0;

    cout << "Sum is ";

    for (int i = number; i > 0; i--)
    {
        sum += i;
        cout << i;

        if (i==1)
        {
            cout << "=";
        }
        else 
        {
            cout << "+";
        }
    }

    cout <<  sum;

    return 0;
}

