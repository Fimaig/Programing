/**
 *@file task63.c.
 *@brief Перетворення числа в рядок.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#define HEIGHT 4
#define WIDTH 20

/**
 * Фунція для перетворення числа в рядок.
*/

char get_res(int num, char result[HEIGHT][WIDTH]);

/**
 * Функція main:
 * задає масив,
 * передає його до функції get_res.
 * оголошує результат.
*/

int main(){

/**
 *@param num - число;
 *@param result - масив;
*/

	char result[HEIGHT][WIDTH];
	int num = 9999;
	result[HEIGHT][WIDTH] = get_res(num, result);
	return 0;
}

// Реалізація функції.

char get_res(int num, char result[HEIGHT][WIDTH]){

	for (int i = 0; i < 20; i++){
		result[i][i] = ' ';
	}

	char thousand[9][20] = {"one_thousand", "two_thousand", "three_thousand", "four_thousand", "five_thousand", "six_thousand", "seven_thousand", "eight_thousand", "nine_thousand"};
	char hundred[9][20] = {"one_hundred", "two_hundred", "three_hundred", "four_hundred", "five_houndred", "six_houndred", "seven_houndred", "eight_hundred", "nine_hundred"};
	char dozens[9][20] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char composite[9][20] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char units[9][20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	for (int i = 0; i < 20; i++){
		result[0][i] = thousand[num / 1000 -1][i];
		result[1][i] = hundred[num % 1000 / 100 - 1][i];
		if (num % 100 >= 10 && num % 100 < 20){
			result[2][i] = composite[num % 100 / 10][i];
		} else {
			result[2][i] = dozens[num % 100 / 10 - 2][i];
			result[3][i] = units[num % 10 - 1][i];
	 	}
	}
	return result;
}
