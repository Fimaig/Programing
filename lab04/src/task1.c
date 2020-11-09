int main()
{
	#define PI 3.14 //Задаємо число ПІ
	#define RADIUS 3 //Задаємо радіус
	char command = 'v'; //Обираємо дію 'v' (об'єм) 's' (площа) або 'l' (довжина)
	float result; //Результат
	switch (command)
	{
	case 'l': //Якщо команда 'l' то:
		result = 2 * PI * RADIUS; //Знаходимо довжину
		break;
	case 's': //Якщо команда 's' то:
		result = PI * RADIUS * RADIUS; //Знаходимо площу
		break;
	case 'v': //Якщо команда 'v' то:
		result = ( 4 * RADIUS * RADIUS * RADIUS * PI ) / 3; //Знаходимо об'єм
		break;
	default:
		result = 0;
	}
	return 0;
}
