//Знайти кількість слів за умови, що між ними може бути будь-яка кількість пропусків
#include <string.h>
int main(){
	#define LENGHT 26

	char arr[LENGHT] = "I want  four for  semester";
	int count = 0;

	for (int i = 1; i < LENGHT; i++){
		if (arr[i] == ' '){
			if (arr[i-1] != ' '){
				count++;
			}
		}
	}
	if (arr[LENGHT - 1] != ' ') count++;
	printf("%d\n", count);
	return 0;
}
