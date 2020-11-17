//Визначити корінь заданого числа
int main()
{
	#define EPS 0.01
	double sqrt = 0;
	double num = 225;
	while (sqrt * sqrt < num){
		sqrt += EPS;
	}
	if ((int) sqrt % 1 == 0){
		sqrt = (int)((sqrt * 100 + 0.5) / 100);
	}
	else{
		sqrt = (float) sqrt;
	}
	return 0;
}
