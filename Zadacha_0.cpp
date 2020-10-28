#include <iostream>
using namespace std;


int main()
{	
	 int number;
	   int factorialSum = 1;

	   cout << "Insert factorial number : ";
	   cin >> number;

	   for (int i = 1; i <= number; i++)
	   {
		   factorialSum *= i;
	   }

	   cout << "Factorial is: " << factorialSum;
	 
	   return 0;
}
