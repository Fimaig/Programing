int main()
{
//П'яте завдання
#define VALUE3 175
int num21; //Одиниці
int num22; //Сотні
float div; //Ділення
float round; //Округлений результат
num21 = VALUE3 % 10;
num22 = VALUE3 / 100;
div = num21 / ( float ) num22;
round = div * 100;
round = ( int ) round;
round = ( float ) round / 100;

return 0;
}
