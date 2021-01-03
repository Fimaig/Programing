char get_res(num);

int main(){
	int num = 211111;
	char result = get_res(num);
	return 0;
}

char get_res(num){
	char result;
	int first_part = 0;
	int second_part = 0;
	while (num / 1000){
		first_part += num % 10;
		num = num / 10;
	}
	int num2 = num;
	while (num2 % 1000){
		second_part += num2 % 10;
		num2 = num2 / 10;
	}
	if (first_part == second_part){
		 result = '1';
	}
	else{
		 result = '0';
	}
	return result;
}
