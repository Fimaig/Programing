int main()
{
	#define NUM 123.987 //Задаємо число

	int part1 = NUM; //Виводимо цілу частину
	float part2 = (NUM - part1) * 1000; //Виводимо дробову частину

	float diff = (part2 / part1); //Знаходимо частку
	diff *= 100; //Зводимо частку до 2 знаків після коми наступними командами
	diff = (int)diff;
	diff /= 100;

	return 0;
}
