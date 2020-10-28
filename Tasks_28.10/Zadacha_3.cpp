#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Number : ";
	cin >> number;
	int fib_first, fib_second;
	fib_first = 0;
	fib_second = 1;
	cout << "Fibonachi numbers : " << 0 << " " << 1 << " " << 1;
	int next_fib_num = fib_first + fib_second;

	while (next_fib_num <= number)
	{
		fib_first = fib_second;
		fib_second = next_fib_num;
		next_fib_num = fib_first + fib_second;
		cout << " " << next_fib_num;
	}

	return 0;
}
