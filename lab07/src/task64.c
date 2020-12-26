#define LENGHT 26

int get_count(char arr[LENGHT]);

int main(){
	char arr[LENGHT] = "I want  four for  semester";
	int count = get_count(arr);
	return 0;
}

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
