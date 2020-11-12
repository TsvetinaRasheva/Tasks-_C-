#include <iostream>
using namespace std;

int main()
{
	cout << "Enter day, month and year: ";
	int day, month, year;
	cin >> day >> month >> year;
	int result_day, result_month, result_year;
	bool is_leap = false;
	bool is_special_case = true;

	//Подобно на валидиране на данните
	if ((day > 31 || day < 1) || (month > 12 || month < 1) ||
		(year < 1900 || year > 2100))
	{
		cout << "Invalid input!";
		return 0;
	}

	//Проверявам дали годината е високосна
	is_leap = (year % 4 == 0 || year % 400 == 0 || year % 100 == 0);	

	//Проверявам дали въведения месец има 31 дни
	bool is_with_31_days = month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12;

	//Поредна проверка ако се въведат несъществуващи дати. Например 31/04.
	if ((day == 31 && !is_with_31_days) || (!is_leap && month == 2 && day == 29))
	{
		cout << "Invalid input!";
		return 0;
	}

	//Проверявам въведената дата дали е край на конкретния месец
	bool is_month_ends_with_31 = day == 31 && is_with_31_days && month != 12;
	bool is_month_ends_with_30 = day == 30 && !is_with_31_days && month != 2;
	bool is_month_is_Feb = month == 2 && (day == 29 && is_leap) ||
		(day == 28 && !is_leap);

	//Обособявам специалните случаи, когато датата е край на месеца
	if (is_month_ends_with_31 || is_month_ends_with_30 || is_month_is_Feb)
	{
		result_day = 1;
		result_month = month + 1;
		result_year = year;
	}
	else if (day == 31 && month == 12)
	{
		result_day = 1;
		result_month = 1;
		result_year = year + 1;
	}
	else
	{
		is_special_case = false;
	}

	//Тук, действам, когато датата е в диапазон [1, предпоследната дата на конкретния месец].
	if (!is_special_case)
	{
		result_day = day + 1;
		result_month = month;
		result_year = year;
	}

	//Оформям резултата спрямо получените стойностти. Например: 2/3 -> 02/03.
	cout << "Next day is " << result_day << ", ";
	switch (result_month)
	{
	case 1: cout << "January"; break;
	case 2: cout << "February"; break;
	case 3: cout << "March"; break;
	case 4: cout << "April"; break;
	case 5: cout << "May"; break;
	case 6: cout << "June"; break;
	case 7: cout << "July"; break;
	case 8: cout << "August"; break;
	case 9: cout << "September"; break;
	case 10: cout << "October"; break;
	case 11: cout << "November"; break;
	case 12: cout << "December"; break;
	default:
		break;
	}
	cout << ", " << result_year;


	return 0;
}



