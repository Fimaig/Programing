//Визначити, чи є ціле 6-ти значне число "щасливим" квитком
int main()
{
	#define NUM 111111
	//
	int count = NUM; //
	int first_part = 0; //
	int second_part = 0; //
	int X = count;
	float result;

	while (count / 1000 > 0){
		first_part += count%10;
		count /= 10;
	}
	while (X > 0){
		second_part += X%10;
		X /= 10;
	}
	if (first_part == second_part){
		 result = 1;
	}
	else{
		 result = 0;
	}
	return 0;
}
