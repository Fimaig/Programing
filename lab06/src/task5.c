//Виконати циклічне зрушення єлементів масиву
int main(){
	#define HEIGHT 3
	#define WIDTH 4


	int arr[HEIGHT][WIDTH] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int buffer = 0;

	for (int i = 0; i < HEIGHT; i++){
		buffer = arr[i][0];
		for (int j = 1; j < WIDTH; j++){
			arr[i][j - 1] = arr[i][j];
		}
		arr[i][WIDTH - 1] = buffer;
	}
	return 0;
}
