//Визначити, чи є задане ціле число простим
int main()
{
	#define NUM 4
	float result;
	if (NUM == 2){
		result = 1;
	}
	if (NUM > 1){
		for (int i = 2; i < NUM; i++){
			if (NUM % i == 0){
				result = 0;
				break;
			}
			else{
				result = 1;
			}
		}
	}
	return 0;
}
