#include <iostream>
using namespace std;

int main()
{
	cout << "Insert amount of people: ";
	int amount_of_people = 0;
	cin >> amount_of_people;

	cout << "Insert price of a ticket: ";
	double price_of_ticket = 0.0;
	cin >> price_of_ticket;

	double percent_of_discount = 0;

	if (amount_of_people >= 5 && amount_of_people <= 10)
	{
		percent_of_discount = 0.05;
	}
	else if (amount_of_people >= 11 && amount_of_people <= 20)
	{
		percent_of_discount = 0.10;
	}
	else
	{
		percent_of_discount = 0.15;
	}

	cout << "Whole sum for museum is " << amount_of_people*(price_of_ticket-(price_of_ticket*percent_of_discount));

	return 0;
}
