#include "lib.h"
/**
 *@file main.c. 
 *@brief Скласти масив та упорядкувати його за зростанням .  
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

/**
 *@param  count1 - лічильник окличних речень;
 *@param  count2 - лічильник питальних речень;
 *@param  count3 - лічильник розповідних речень;
 *@param  STR - текст для пошуку лексем;
  */
#define STR "Do cats eat midges? Do midges eat cats? No! Maybe."

/**
 *Функція main: задає строку та лічильнтки і передає їх у функцію
 */
int main() 
{
	int str_lenght = strlen(STR);
	char sen[str_lenght];
	strcpy(sen, STR);
	char* buf = sen;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	count1 = FunkVOZKL(buf, count1); 
	count2 = FunkTCK(buf, count2);
	count3 = FunkVOP(buf, count3);
	
	return 0; 
}


