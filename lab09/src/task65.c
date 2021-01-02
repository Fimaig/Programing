#include <stdio.h>
#include <stdlib.h>

/**
 *@file task65.c.
 *@brief Виконати циклічне зрушення елементів справа наліво.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#define HEIGHT 4
#define WIDTH 4

/**
 * Фунція для циклічного зрушення елементів справа наліво.
*/

int get_arr(int arr[HEIGHT][WIDTH]);

/**
 * Функція main:
 * задає масив,
 * передає його до функції get_count.
 * оголошує результат.
*/

int main(){
	srand(time(NULL));
	int arr[HEIGHT][WIDTH] = {0};
	int result[HEIGHT][WIDTH] = {0};
	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < WIDTH; j++){
			arr[i][j] = rand() % 10;
		}
	}
	result[HEIGHT][WIDTH] = get_arr(arr);
	return 0;
}

// Реалізація функції.

int get_arr(int arr[HEIGHT][WIDTH]){
	int res[HEIGHT][WIDTH] = {0};
	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < WIDTH; j++){
			for (int k = 0; k < HEIGHT; k++){
				res[i][i] += arr[i][k];
			}
		}
	}
	return res[HEIGHT][WIDTH];
}
