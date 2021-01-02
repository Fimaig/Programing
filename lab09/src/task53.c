/**
 *@file task53.c.
 *@brief Визначення, чи є ціле 6-значне число "щасливим" квитком.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

/**
 * Фунція для визначення, чи є ціле 6-значне число "щасливим" квитком.
*/

char get_res(num);

/**
 * Функція main:
 * задає 6-ти значне число,
 * передає його до функції get_res,
 * оголошує результат.
*/

int main(){

/**
 *@param num - число;
 *@param result - результат;
*/
	int num = 211111;
	char result = get_res(num);
	return 0;
}

// Реалізація функції.

char get_res(num){
	char result;
	int first_part = 0;
	int second_part = 0;
	while (num / 1000){
		first_part += num % 10;
		num = num / 10;
	}
	int num2 = num;
	while (num2 % 1000){
		second_part += num2 % 10;
		num2 = num2 / 10;
	}
	if (first_part == second_part){
		 result = '1';
	}
	else{
		 result = '0';
	}
	return result;
}
