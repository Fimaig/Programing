#define MIST 0.01

double get_sqrt(double num);

int main(){
	double num = 225;
	double sqrt = get_sqrt(num);
	return 0;
}

double get_sqrt(double num){
	double sqrt = 0;
	while (sqrt * sqrt < num){
		sqrt += MIST;
	}
	return sqrt;
}
