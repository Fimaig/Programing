//Центрувати заданий рядок з заданим наповнючаем
int main()
{
	#define ARR 15

	char arr[ARR] = "Ivanov        \0";
	char filler = '_';
	char result[ARR];
	result[ARR - 1] = '\0';
	int space = 0;

	for (int i = 0; i < ARR; i++){
		if (arr[i] == ' ') space++;
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

	return 0;
}
