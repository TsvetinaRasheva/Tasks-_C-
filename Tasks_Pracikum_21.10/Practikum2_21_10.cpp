#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Zadacha 1
   /* cout << "Input year: ";
	int year;
	cin >> year;

	bool is_last_digits_zero = (year % 10) == 0 && (year / 10) % 10 == 0;

	if (is_last_digits_zero && year % 400 == 0)
	{
		cout << year << " is a leap year. \n";
	}
	else if (year % 4 == 0)
	{
		cout << year << " is a leap year. \n";
	}
	else
	{
		cout << year << " is not a leap year. \n";
	}
	return 0;
}*/

//Zadacha 2
/* cout << "Input char: ";
 char element;
 cin >> element;

 if (element >= 97 && element <= 122)
 {
	 element = element - 32;
	 cout << "The lower case character corresponding to is " << element;
 }
 else if (element >= 65 && element <= 90)
 {
	 element = element + 32;
	 cout << "The upper case character corresponding to is " << element;

 }
 else
 {
	 cout << element << " is not a letter. ";
 }

 return 0;
}*/

//Zadacha 3
/* int numbersOfMonths;
 cin >> numbersOfMonths;

 switch (numbersOfMonths)
 {
 case 3:
 case 4:
 case 5: cout << "Season is Spring. \n"; break;
 case 6:
 case 7:
 case 8: cout << "Season is Summer. \n"; break;
 case 9:
 case 10:
 case 11: cout << "Season is Autumn. \n"; break;
 case 12:
 case 1:
 case 2: cout << "Season is Winter. \n"; break;
 default: cout << "Invalid input."; break;
 }

 return 0;
}
*/

//Zadacha 4
 /*int a, b;

 cout << "Input numbers (a,b): ";
 cin >> a >> b;

  //Условията за безкрайност и за няма решение
 if (a==0)
 {
	 if (b==0)
	 {
		 cout << "Infinity.";
		 return 0;
	 }
	 else
	 {
		 cout << "NO!";
		 return 0;
	 }
 }

 //Условието да работим само с цели числа
 if (b%a!=0)
 {
	 cout << "No!";
	 return 0;
 }


 cout << "Result : " << -b / a;


 return 0;
 */

 //Zadacha 5
/*int numbersOfMonths, year;
 cin >> numbersOfMonths >> year;

 switch (numbersOfMonths)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12: cout << "Days are 31."; break;
 case 4:
 case 6:
 case 9:
 case 11: cout << "Days are 30.";
 default: {
	 if ((((year % 10) == 0 && (year / 10) % 10 == 0) && year % 400 == 0)
		 || year % 4 == 0)
	 {
		 cout << "Days are 29.";
	 }
	 else
	 {
		 cout << "Days are 28.";
	 }}; break;
 }

 return 0;
}
*/

//Zadacha 6
	/*int price, usb, ram;
	bool ssd = true;

	cin >> price >> usb >> ram;

	bool isBuyPC = (usb >= 3 && ram >= 8 && ssd &&
		(price >= 1000 && price <= 1500)) ||
		(ram <= 8 && !ssd && price <= 800);

	cout << boolalpha << isBuyPC;

	return 0;
	*/

	//Zadacha 7
	/*int number;

	cin >> number;

	int firstDgigt = (number / 1000) % 10;

	bool isBigger = (firstDgigt%2!=0) && (firstDgigt > (number / 100) % 10) &&
	(firstDgigt > (number / 10) % 10) &&
	(firstDgigt > number % 10);

	cout << boolalpha << isBigger;

	return 0;
	*/

	//Zadacha BONUS
	/*int tomato, papers, carrots, olives, potatoes, ingridians;
	bool is_comming_a_frient = true;

	cout << "Input food list: ";
	cin >> tomato >> papers >> carrots >> olives >> potatoes >> ingridians;

	bool is_salad = tomato == 1 && papers == 2 && carrots == 4 &&
	olives == 3 && potatoes == 3 && ingridians == 150;

	bool is_soup = tomato == 2 && papers == 3 && carrots == 5 &&
	olives == 6 && potatoes == 10 && ingridians == 200 && is_comming_a_frient;

	bool is_manja = tomato == 5 && papers == 6 && carrots == 12 &&
	olives == 7 && potatoes == 12 && ingridians == 300 && is_comming_a_frient;

	if (is_salad)
	{
		cout << "Traicho is going to eat salad.";
	}
	else if (is_soup)
	{
		cout << "Traicho is going to eat soup.";
	}
	else if(is_manja)
	{
		cout << "Traicho is going to eat manja.";
	}
	else
	{
		cout << "Traico is going to be hungry.";
	}
	 return 0;
	*/

}
