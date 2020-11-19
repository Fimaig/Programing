//Визначити найбільший спільний дільник для двох заданих чисел
int main()
{
	#define NUM1 75
	#define NUM2 13
	int greatest_common_factor;
	int X = NUM1;
	int Y = NUM2;

	while (X != 0 && Y != 0){
		if (X > Y) X = X % Y;
		else Y = Y % X;
	}
	greatest_common_factor = X + Y;
	return 0;
}
