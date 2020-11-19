//Визначити корінь заданого числа
int main()
{
	#define MIST 0.01
	double sqrt = 0;
	double num = 225;
	while (sqrt * sqrt < num){
		sqrt += MIST;
	}
	return 0;
}
