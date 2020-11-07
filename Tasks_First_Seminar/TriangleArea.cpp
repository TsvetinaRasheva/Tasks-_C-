#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;

    //Оформяне на интерфейс
    cout << "Find triangle area.\nInput sides: ";

    //Въвеждане стойности на променливите
    cout << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    //Определяне дали изобщо съществува триъгълник с посочените страни 
    if(a<=0||b<=0||c<=0||a+b<c||a+c<b||b+c<a)
    {
        cout << "Invalid input!";
        return 0;
    }
    
    //Извършваме преобразования и извеждаме резултата
    double roundP = (a + b + c) / 2;
    cout << "\nResult is : " << sqrt((roundP * (roundP - a) * (roundP - b) * (roundP - c)));
    cout << endl;

    return 0;
}
