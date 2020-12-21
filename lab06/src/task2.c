//Заповнити масив із заданої кількості елементів простими числами, що не повторюються
int main(){
	#define ARR 25
	#define MAX 99999

	int arr[ARR];
	int first_num = 2;

	for (int i = 0; i < ARR; i++){
		for (int j = first_num; j < MAX; j++){
			int prime = 1;
			for (int num = 2; num <= j / 2; num++){
				if (j % num == 0){
					prime = 0;
					break;
				}
			}
			if (prime == 1){
				arr[i] = j;
				first_num = j + 1;
				break;
			}
		}
	}
	return 0;
}
