/**
 *@file task55.c.
 *@brief Визначення кореня.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#define MIST 0.01

/**
 * Фунція для визначення кореня.
*/

double get_sqrt(double num);

/**
 * Функція main:
 * задає число,
 * передає його до функції get_sqrt.
 * оголошує результат.
*/

int main(){

/**
 *@param num - число;
 *@param sqrt - корінь;
*/

	double num = 225;
	double sqrt = get_sqrt(num);
	return 0;
}

// Реалізація функції.

double get_sqrt(double num){
	double sqrt = 0;
	while (sqrt * sqrt < num){
		sqrt += MIST;
	}
	return sqrt;
}
