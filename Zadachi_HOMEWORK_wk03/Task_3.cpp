#include <iostream>
using namespace std;

int main()
{
	bool is_new, has_air_cond;
	
	int power, run, price;
	
	cin >> is_new >> has_air_cond >> power >> run >> price;

	bool is_second_hand_car = ((is_new==false)?true:false) && ((((has_air_cond == true) ? true : false) && run <= 115000 && power >= 70 && price <= 6000)
		|| (((has_air_cond == false) ? true : false) && run >= 180000 && power >= 60 && price <= 2000));

	bool is_new_car = ((is_new == true) ? true : false) && ((power >= 70 && power <= 90) && price <= 25000);

	bool if_buy_a_car = is_second_hand_car || is_new_car;

	cout << boolalpha << if_buy_a_car;

	return 0;
}