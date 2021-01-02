/**
 *@file task52.c.
 *@brief Визначення, чи є задане ціле число простим.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

/**
 * Фунція для визначення, чи є задане ціле число простим.
*/

char get_res(num);

/**
 * Функція main:
 * задає число,
 * передає його до функції get_res,
 * оголошує результат.
*/

int main()
{

/**
 *@param num - число;
 *@param res - результат;
*/
	int num = 2;
	char res = get_res(num);
	return 0;
}

// Реалізація функції.

char get_res(num){
	char res;
	if (num == 2){
		res = '1';
	}
	if (num > 1){
		for (int i = 2; i < num; i++){
			if (num % i == 0){
				res = '0';
				break;
			}
			else{
				res = '1';
			}
		}
	}
	return res;
}
