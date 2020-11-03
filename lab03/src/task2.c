int main()
{
//Друге завдання
#define VALUE1 276
int num1; //Одиниці
int num2; //Десятки
int num3; //Сотні
int reverse; //Обернене число
num1 = VALUE1 % 10;
num2 = ( VALUE1 % 100 ) / 10;
num3 = VALUE1 / 100;
reverse = num1 * 100 + num2 * 10 + num3;

return 0;
}
