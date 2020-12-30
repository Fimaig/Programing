#include <stdio.h>
#include <stdlib.h>

#define SIZE 30
#define MAX 30

int arr(int prime_numbers[SIZE]);
int main()
{
	int prime_numbers[SIZE];
	arr(prime_numbers);
	return 0;
}
int arr(int prime_numbers[SIZE])
{ 
	srand(time(NULL));
	int num = rand() % 1000;
	char result;
	int j = 0;
	while (j < MAX){
		for ( int i = 0; i < MAX; i++){
                	if (prime_numbers[i] == num){
                       num = rand() % 1000;   
                	}
        	}

		for ( int i = 2 ; i < num / 2 ; i++){
			if (num % i == 0){
				result = '0';
				break;
			}else{
                       	result = '1';
			}
		}
	
		if (result == '0'){
			num = rand() % 1000;
		}else{
			prime_numbers[j] = num;
			j++;
			num = rand() % 1000;
         	} 
	}
	return prime_numbers;
}
