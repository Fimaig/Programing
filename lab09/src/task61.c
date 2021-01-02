/**
 *@file task61.c.
 *@brief Центрування заданого рядка на площині.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#define ARR 15

/**
 * Фунція для центрування заданого рядка на площині.
*/

char get_res(char arr[ARR], char result[ARR]);

/**
 * Функція main:
 * задає масив,
 * передає його до функції get_res.
 * оголошує результат.
*/

int main(){

/**
 *@param arr - масив;
 *@param result - результат;
*/

	char arr[ARR] = "Ivanov        \0";
	char result[ARR] = { };
	get_res(arr, result);
	return 0;
}

// Реалізація функції.

char get_res(char arr[ARR], char result[ARR]){
	char filler = '_';
	int space = 0;
	result[ARR - 1] = '\0';
	
	for (int i = 0; i < ARR; i++){
		if (arr[i] == ' '){
		space++;
		}
	}

	for (int i = 0; i < space / 2; i++){
		result[i] = filler;
	}

	for (int i = 0; i < ARR - space - 1; i++){
		result[i + space / 2] = arr[i];
	}

	for (int i = ARR - space / 2 - 1; i < ARR - 1; i++){
		result[i] = filler;
	}

	return result;
}
