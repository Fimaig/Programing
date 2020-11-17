//Визначити найбільший спільний дільник для двох заданих чисел
int main()
{
	#define NUM1 75 //Перше число
	#define NUM2 125 //Друге число

	int larger_num; //Задаємо найбільше число 
	int smaller_num; //Задаємо найменьше число

	//Визначаємо яке з двох заданих чисел є більшим, а яке меншим

	if (NUM1 > NUM2){
		larger_num = NUM1;
		smaller_num = NUM2;
	}
	else{
		larger_num = NUM2;
		smaller_num = NUM1;
	}
	int largest_common_divisor = smaller_num; //Задаємо найбільший спільний дільник
	int remainder; //Задаємо залишок

	//Використовуючи алгоритм Евкліда знайдемо НСД

	do{
		remainder = larger_num % smaller_num; //Знаходимо залишок поділивши з остачею більше число на менше
		if (remainder != 0) largest_common_divisor = remainder; //Якщо залишок не дорівнює 0, замінюємо вхідні дані
		larger_num = smaller_num; //Найбільше число замінюється найменшим
		smaller_num = remainder; //Найменше число замінюється залишком
	}while(remainder != 0); //Повторюємо дії доки залишок не дорівнює нулю
	return 0;
}
