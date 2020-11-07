#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    cout << "1) " << number << " * 5 = " << number*5 << "\n2) "<< number*5 << " + 10 = " << (number * 5)+10 << "\n3) "<< (number * 5) + 10 << " / 5 ="
        << ((number * 5) + 10)/5 << "\n4) "<< ((number * 5) + 10) / 5 << " - 2 = " << (((number * 5) + 10) / 5)-2 << endl;

    return 0;
}


