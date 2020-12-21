//Помножити матрицю саму на себе
int main(){
	#define SIZE 3

	int arr[SIZE][SIZE] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int result[SIZE][SIZE] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++){
			for (int k = 0; k < SIZE; k++){
				result[i][j] += arr[i][k] * arr[k][j];
			}
		}
	}
	return 0;
} 
