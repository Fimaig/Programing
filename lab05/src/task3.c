//Визначити, чи є ціле 6-ти значне число "щасливим" квитком
int main()
{
	int num = 111112;
	int first_part = 0;
	int second_part = 0;
	float result;

	while (num / 1000){ //Відокремлюємо першу частину
		first_part += num % 10;
		num /= 10;
	}
	while (num % 1000){ //Відокремлюємо другу частину
		second_part += num % 10;
		num /= 10;
	}
	if (first_part == second_part){ //Прирівнюємо
		 result = 1;
	}
	else{
		 result = 0;
	}
	return 0;
}
