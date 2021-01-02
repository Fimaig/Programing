#include <stdlib.h>
/**
 *@file task51.c.
 *@brief Визначення НОД.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

/**
 * Фунція для знаходження НОД.
*/

int get_gcf(int X, int Y);

/**
 * Функція main:
 * задає 2 числа,
 * передає їх до функції get_gcf,
 * оголошує результат.
*/
int main(){

/**
 *@param X - 1 число;
 *@param Y - 2 число;
 *@param gcf - НОД;
*/

	srand(time(NULL));

	int X = rand();
	int Y = rand();
	int gcf = get_gcf(X, Y);
	return 0;
}

// Реалізація функції.

int get_gcf(int X, int Y){
	int gcf;
	while (X != 0 && Y != 0){
		if (X > Y) X = X % Y;
		else Y = Y % X;
	}
	gcf = X + Y;
	return gcf;
}
