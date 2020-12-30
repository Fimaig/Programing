char get_res(num);

int main()
{
	int num = 2;
	char res = get_res(num);
	return 0;
}

char get_res(num){
	char res;
	if (num == 2){
		res = '1';
	}
	if (num > 1){
		for (int i = 2; i < num; i++){
			if (num % i == 0){
				res = '0';
				break;
			}
			else{
				res = '1';
			}
		}
	}
	return res;
}
