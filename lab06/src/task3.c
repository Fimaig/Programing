//Перетворити число в рядок
int main(){
	#define HEIGHT 4
	#define WIDTH 20

	char result[HEIGHT][WIDTH];
	int num = 1234;

	for (int i = 0; i < 20; i++){
		result[i][i] = ' ';
	}

	char thousand[9][20] = {"one_thousand", "two_thousand", "three_thousand", "four_thousand", "five_thousand", "six_thousand", "seven_thousand", "eight_thousand", "nine_thousand"};
	char hundred[9][20] = {"one_hundred", "two_hundred", "three_hundred", "four_hundred", "five_houndred", "six_houndred", "seven_houndred", "eight_hundred", "nine_hundred"};
	char dozens[9][20] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char composite[9][20] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char units[9][20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	for (int i = 0; i < 20; i++){
		result[0][i] = thousand[num / 1000 -1][i];
		result[1][i] = hundred[num % 1000 / 100 - 1][i];
		if (num % 100 >= 10 && num % 100 < 20){
			result[2][i] = composite[num % 100 / 10][i];
		} else {
			result[2][i] = dozens[num % 100 / 10 - 2][i];
			result[3][i] = units[num % 10 - 1][i];
	 	}
	}
	return 0;
}
