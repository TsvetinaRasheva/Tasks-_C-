// NANDFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Please enter 0 or 1 for NAND function: \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	//Проверяваме дали имаме валиден вход
	if (a>1||a<0||b>1||b<0)
	{
		cout << "Invalid input!";
		return 0;
	}

	//Вземайки предвид въведените стойностти, проверяваме случаите. Използвала съм единична If конструкция,тъй като имаме само един случай,в който 
	//резултатът е различен от 1. Във всички останали случаи продължаваме до края на програмата, защото получаваме един и същи резултат.
	if (a == 1 && b == 1)
	{
		cout << a << " + " << b << "= 0";
		return 0;
	}

	cout << a << " + " << b << "= 1";
	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
