//Визначити чи є задане число досконалим
int main()
{
	int num = 5;
	int sum = 0;
	char result;

	for (int i = 1; i<= num / 2; ++i){
		if (num % i == 0){
			sum += i;
		}
	}

	if (num == sum){
		result = '1';
	}
	else{
		result = '0';
	}
	return 0;
}

