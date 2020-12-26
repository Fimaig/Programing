#include <stdlib.h>

int get_gcf(int X, int Y);

int main(){

	srand(time(NULL));

	int X = rand();
	int Y = rand();
	int gcf = get_gcf(X, Y);
	return 0;
}

int get_gcf(int X, int Y){
	int gcf;
	while (X != 0 && Y != 0){
		if (X > Y) X = X % Y;
		else Y = Y % X;
	}
	gcf = X + Y;
	return gcf;
}
