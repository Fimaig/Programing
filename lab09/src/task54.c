/**
 *@file task54.c.
 *@brief Визначення, чи є задане число досконалим.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

/**
 * Фунція для визначення, чи є задане число досконалим.
*/

char get_res(num);

/**
 * Функція main:
 * задає число,
 * передає його до функції get_res.
 * оголошує результат.
*/


int main()
{

/**
 *@param num - число;
 *@param result - результат;
*/

	int num = 6;
	char result = get_res(num);
	return 0;
}

// Реалізація функції.

char get_res(num){
	int sum = 0;
	char result;
	for (int i = 1; i<= num / 2; ++i){
		if (num % i == 0){
			sum += i;
		}
	}

	if (num == sum){
		result = '1';
	}
	else{
		result = '0';
	}
	return result;
}

