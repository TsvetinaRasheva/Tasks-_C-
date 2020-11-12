#include <iostream>
using namespace std;

int main()
{
	cout << "Enter number: ";
	int number = 0;
	cin >> number;

	//Въвеждане на използваните променливи и помощните такива.
	bool is_power_2 = true;
	bool is_power_3 = true;
	bool is_power_5 = true;
	int counter_power_3 = 0;
	int counter_power_5 = 0;
	int closer_elem_for_3 = 0;
	int closer_elem_for_5 = 0;
	int num_3 = number;
	int num_5 = number;
	int current_num = number;

	//Подобно на валидация за входните данни.
	if (number < 4)
	{
		cout << "Invalid entered data!";
		return 0;
	}

	//Определям дали числото в степен на 2-ката
	while (number != 1)
	{
		if (number % 2 != 0)
		{
			is_power_2 = false;
			break;
		}
		number /= 2;
	}

	//Разглеждам двата случая. Ако да -> търся степен на 3. Ако не -> търся степен на 5.
	if (is_power_2)
	{
		do
		{
			//Проверявам дали се дели на 3 и прилагам нужните действие за последващата итерация.
			if (current_num % 3 == 0)
			{
				if (closer_elem_for_3 == 0)
				{
					closer_elem_for_3 = current_num;
				}
				++counter_power_3;
				current_num /= 3;
				is_power_3 = true;
			}
			else//Ако не се дели на 3 => не е степен на 3. Продължавам да издирвам нужното ми число.
			{
				is_power_3 = false;
				counter_power_3 = 0;
				closer_elem_for_3 = 0;
				num_3 -= 1;
				current_num = num_3;
			}

		} while (current_num != 1);

		//Извеждам резултата на конзолата.
		if (is_power_3)
		{
			cout << "This number is power of 2. \nAnd the closer power of 3 is " << counter_power_3 << " and powered number is " << closer_elem_for_3 << ".";
		}
	}
	else if (!is_power_2)
	{
		do
		{
			if (current_num % 5 == 0)//Проверявам числото дели ли се на 5 и отново правя нужните преобразувания.
			{
				if (closer_elem_for_5 == 0)
				{
					closer_elem_for_5 = current_num;
				}
				++counter_power_5;
				current_num /= 5;
				is_power_5 = true;
			}
			else //Ако не се дели на 5, продължавам да търся число, което се дели и съответно е степен на 5. 
			{
				is_power_5 = false;
				counter_power_5 = 0;
				closer_elem_for_5 = 0;
				num_5 -= 1;
				current_num = num_5;
			}

		} while (current_num != 1);

		//Извеждам данните
		if (is_power_5)
		{
			cout << "This number is not power of 2. \nAnd the closer power of 5 is " << counter_power_5 << " and powered number is " << closer_elem_for_5 << ".";
		}
	}

	return 0;
}


