#include <stdio.h>
#include <stdlib.h>

#define HEIGHT 4
#define WIDTH 4

int get_arr(int arr[HEIGHT][WIDTH]);

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
