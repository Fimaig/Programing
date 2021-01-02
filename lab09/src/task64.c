/**
 *@file task64.c.
 *@brief Знайти кількість слів за умови, що між словами може бути будь яка кількість слів.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#define LENGHT 26

/**
 * Фунція для знаходження кількості слів.
*/

int get_count(char arr[LENGHT]);

/**
 * Функція main:
 * задає масив,
 * передає його до функції get_count.
 * оголошує результат.
*/

int main(){

/**
 *@param arr - масив;
 *@param count - результат;
*/

	char arr[LENGHT] = "I want  four for  semester";
	int count = get_count(arr);
	return 0;
}

// Реалізація функції.

int get_count(char arr[LENGHT]){
	int count = 0;
	for (int i = 1; i < LENGHT; i++){
		if (arr[i] == ' '){
			if (arr[i-1] != ' '){
				count++;
			}
		}
	}
	if (arr[LENGHT - 1] != ' ') count++;
	return count;
}
