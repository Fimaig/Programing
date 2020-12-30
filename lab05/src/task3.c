//Визначити, чи є ціле 6-ти значне число "щасливим" квитком
int main()
{
	long num = 2111111111111111;
	int first_part = 0;
	int second_part = 0;
	char result;

	while (num / 100000000){ //Відокремлюємо першу частину
		first_part += num % 10;
		num = num / 10;
	}
	long num2 = num;
	while (num2 % 100000000){ //Відокремлюємо другу частину
		second_part += num2 % 10;
		num2 = num2 / 10;
	}
	if (first_part == second_part){ //Прирівнюємо
		 result = '1';
	}
	else{
		 result = '0';
	}
	return 0;
}
