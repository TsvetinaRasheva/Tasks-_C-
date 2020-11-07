#include <iostream>
using namespace std;

int main()
{
    int three_digit_number;
    int index_number;
    int digit_for_print;

    cin >> three_digit_number >> index_number;
    
    //Проверяваме кой от случайте ни трябва и изпълняваме конкретния блок.
    if (index_number == 1)
    {
        cout << "Digit is: " << three_digit_number/100;
    }
    else if (index_number == 2)
    {
        cout << "Digit is: " << (three_digit_number / 10)%10;
    }
    else if (index_number == 3)
    {
        cout << "Digit is: " << three_digit_number % 10;
    }
    else
    {
        cout << "Invalid input!";
    }
}
