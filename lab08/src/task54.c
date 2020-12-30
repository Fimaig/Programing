char get_res(num);

int main()
{
	int num = 6;
	char result = get_res(num);
	return 0;
}

char get_res(num){
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
	return result;
}

