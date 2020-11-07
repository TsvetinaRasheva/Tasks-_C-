#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Numbers before : " << a << " " << b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nNumbers after : " << a << " " << b;
}

