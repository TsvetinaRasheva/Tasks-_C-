#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int ARR_LENGHT = 15;
	const int ARR_LENGHT_NIMBER = 15;
	char input_data[ARR_LENGHT] = { -1 };
	int result_arr[ARR_LENGHT] = { -1 };
	int couter_day_for_power = 0;
	int counter_year_for_power = 0;
	int dots = 0;
	int n = 0;
	int count_input_day = 0;
	int count_input_month = 0;
	int count_input_year = 0;
	bool is_leap_year = false;
	bool is_with_31_days = false;

	//Въвеждам елементите. Тъй като нямам конкретна бройка, правя разни разсъждения.
	cout << "Enter data in Big Bear style (:D) : ";
	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		cin >> input_data[i];
		
		if (input_data[i] == '.')
		{
			++dots;
		}
		

		if (dots == 0)
		{
			++count_input_day;
		}
		else if (dots == 1)
		{
			++count_input_month;
		}
		else if (dots == 2 && count_input_year != 3)
		{
			++count_input_year;
		}
		else if (dots == 2 && count_input_year == 3) {
			break;
		}

	}

	if (count_input_day > 2 || count_input_month > 2 || count_input_year > 3)
	{
		cout << "Incorrect input! Please try again.";
		return 0;
	}

	//Нулирам променливата, тъй като ще ми трябва по надолу.
	dots = 0;


	//Въвеждам числото за преобразуване.
	cout << "Enter number for changing: ";
	int number_for_changing = 0;
	cin >> number_for_changing;


	//Преобразувам елементите в масив от числа, за да ги обработвам.
	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		switch (input_data[i])
		{
		case '0':
		{ result_arr[i] = 0; break; }
		case 'a':
		{ result_arr[i] = 1; break; }
		case 'b':
		{ result_arr[i] = 2; break; }
		case 'c':
		{ result_arr[i] = 3; break; }
		case 'd':
		{ result_arr[i] = 4; break; }
		case 'e':
		{ result_arr[i] = 5; break; }
		case 'f':
		{ result_arr[i] = 6; break; }
		case 'g':
		{ result_arr[i] = 7; break; }
		case 'h':
		{ result_arr[i] = 8; break; }
		case 'i':
		{ result_arr[i] = 9; break; }
		case 'j':
		{ result_arr[i] = 10; break; }
		case 'k':
		{ result_arr[i] = 11; break; }
		case 'l':
		{ result_arr[i] = 12; break; }
		case 'm':
		{ result_arr[i] = 13; break; }
		case '.':
		{result_arr[i] = 46; break; }
		default:result_arr[i] = -1;
			break;
		}
	}


	//Тук, си фиксирам брой на елементите, които трябва да се обходят
	//отделно за дните и за годината. Пример: mkl за година има 3 елемнта за
	//обработване, които ще превърна в десетична бройна система.
	for (size_t i = 0; i < ARR_LENGHT; i++)
	{
		//Ако нямам отчетени точки, съм в графа: ден.
		if (result_arr[i] != 46 && dots == 0)
		{
			++couter_day_for_power;
		}
		//Ако имам 2 засечени точки, попадам в графа: година.
		else if (result_arr[i] != 46 && dots == 3 && result_arr[i] != -1)
		{
			++counter_year_for_power;
		}
		else
		{
			++dots;
		}
	}


	//За да не заделям излишно място за нов масив, в който да слагам резултата за принтене, просто
	//променям съществувашия масив с преобразуваните числа. За тази цел си създавам променлива, на която да 
	//присвоя пресметнатия ден. И променлива 'с', която да служи за степен.
	int sum_of_days = 0;
	int c = couter_day_for_power;


	//Броя на елементите ползвам като степени на 14 при превръщането 
	//в десетична система. Този цикъл е за дните, защото например 31
	//е ас и трябва да се обходят и двата елемента.
	for (size_t i = 0; i < couter_day_for_power; i++)
	{
		c -= 1;
		sum_of_days += result_arr[i] * pow(14, c);
	}

	//Поставям новата стойност в стария масив.
	result_arr[0] = sum_of_days;


	//Месеците са 12 и при тях няма нужда от някакво обхождане, затова преминавам към годините.
	//В зависимост от дължината на ДЕН-частта, определя на кой интекс да отида, за да почна да
	//работя с годината.
	if (couter_day_for_power == 2)
	{
		n = 3;
		result_arr[1] = result_arr[n];
	}
	else
	{
		n = 2;
		result_arr[1] = result_arr[n];
	}


	//За годината ще ползвам същата логика както за деня. Тоест, ще сметна годината в отделна
	//променлива и ще я присвоя на масива.
	int sum_of_year_elem = 0;

	//Обхождам елементите отнасящи се за годината. Обхождането е като при дните със степени.
	for (size_t i = n + 2; i <= n + 4; i++)
	{
		counter_year_for_power -= 1;
		sum_of_year_elem += (result_arr[i] * pow(14, counter_year_for_power));
	}

	//Поставям новата стойност в стария масив.
	result_arr[2] = sum_of_year_elem;

	//Допълвам масива с елементи, които да служат за край при принтенето
	for (size_t i = 0; i <= ARR_LENGHT; i++)
	{
		if (i > 2)
		{
			result_arr[i] = -1;
		}
	}

	//Извеждам си условия, които ползвам при валидацията на получените данни
	is_leap_year = (result_arr[2] % 4 == 0 || result_arr[2] % 100 == 0 || result_arr[2] % 400 == 0);
	is_with_31_days = result_arr[1] == 1 || result_arr[1] == 3 || result_arr[1] == 5 || result_arr[1] == 7
		|| result_arr[1] == 8 || result_arr[1] == 10 || result_arr[1] == 12;

	//Правя валидация на преобразуваните данни
	if (result_arr[0] > 31 || !is_leap_year && result_arr[0] > 28 && result_arr[1] == 2 || !is_with_31_days && result_arr[0] > 30 && result_arr[1] < 13)
	{
		cout << "Incorrect input! This is invalid day.";
		return 0;
	}
	else if (result_arr[1] > 12)
	{
		cout << "Incorrect input! This is invalid month.";
		return 0;
	}

	//Най-накрая извеждам преобразуваните данни на конзолата в нужния формат и спрямо поставените условия.
	if (result_arr[2] >= 2040)
	{
		cout << "\nNo, ";
		for (size_t i = 0; i < ARR_LENGHT; i++)
		{
			if (result_arr[i] != -1)
			{
				cout << result_arr[i];
				cout << ".";
			}
			else
			{
				break;
			}

		}
		cout << " is working day.";
	}
	else
	{
		cout << "\nYes, ";
		for (size_t i = 0; i < ARR_LENGHT; i++)
		{
			if (result_arr[i] != -1)
			{
				cout << result_arr[i];
				cout << ".";
			}
			else
			{
				break;
			}
		}
		cout << " isn't a working day.";
	}


	//Почвам да работя по втората част на задачата -> Преобразуването на числото.
	cout << "\nChanged number is " << number_for_changing << " -> ";

	//Извършвам пресмятания и за числото и извеждам сметнатото такова.
	if (number_for_changing < 14)//Когато числото се явява едносимволно според моята BIG BEAR система, директно го принтя.
	{
		switch (number_for_changing)
		{
		case 0:
		{ cout << "0"; break; }
		case 1:
		{ cout << "a"; break; }
		case 2:
		{ cout << "b"; break; }
		case 3:
		{ cout << "c"; break; }
		case 4:
		{ cout << "d"; break; }
		case 5:
		{ cout << "e"; break; }
		case 6:
		{ cout << "f"; break; }
		case 7:
		{ cout << "g"; break; }
		case 8:
		{ cout << "h"; break; }
		case 9:
		{ cout << "i"; break; }
		case 10:
		{ cout << "j"; break; }
		case 11:
		{ cout << "k"; break; }
		case 12:
		{ cout << "l"; break; }
		case 13:
		{ cout << "m"; break; }
		default:
			break;
		}
	}
	else//Ако не е, извършвам сметки и тогава го извеждам.
	{
		int index = 0;
		bool is_end = false;
		char arr_print_changed_num[ARR_LENGHT_NIMBER] = { 0 };

		do
		{
			//Превръщам числото като събирам остатъците
			//му и ги преобразувам в новата система.
			switch (number_for_changing % 14)
			{
			case 0:
			{ arr_print_changed_num[index] = '0'; break; }
			case 1:
			{arr_print_changed_num[index] = 'a'; break; }
			case 2:
			{ arr_print_changed_num[index] = 'b'; break; }
			case 3:
			{  arr_print_changed_num[index] = 'c'; break; }
			case 4:
			{ arr_print_changed_num[index] = 'd'; break; }
			case 5:
			{ arr_print_changed_num[index] = 'e'; break; }
			case 6:
			{ arr_print_changed_num[index] = 'f'; break; }
			case 7:
			{ arr_print_changed_num[index] = 'g'; break; }
			case 8:
			{ arr_print_changed_num[index] = 'h'; break; }
			case 9:
			{ arr_print_changed_num[index] = 'i'; break; }
			case 10:
			{arr_print_changed_num[index] = 'j'; break; }
			case 11:
			{arr_print_changed_num[index] = 'k'; break; }
			case 12:
			{ arr_print_changed_num[index] = 'l'; break; }
			case 13:
			{ arr_print_changed_num[index] = 'm'; break; }
			default:
				break;
			}

			//Ползвам проверката, за да може цикълът да не свърши когато
			//получа краен резултат, а да вземе и крайното число и да го 
			//превърне в символ.
			if (number_for_changing / 10 == 0)
			{
				is_end = true;
			}

			++index;
			number_for_changing /= 14;

		} while (number_for_changing / 10 != 0 || !is_end);

		//Принтя получения резултат. Като го правя до -1,
		//защото трябва да хвана и първия елемент, който е на
		//индекс 0.
		for (int i = index - 1; i > -1; i--)
		{
			cout << arr_print_changed_num[i];
		}

		cout << endl;
	}

	return 0;
}