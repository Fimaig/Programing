int main()
{
//Четверте завдання
#define VALUE2 3201
#define SYS8 8 //Восьмирічна система відліку
int num11; //Одиниці
int num12; //Дестяки
int num13; //Сотні
int num14; //Тисячі
double val10; //Еквівалент в десятирічній системі відлику
num11 = VALUE2 % 10;
num12 = ( VALUE2 % 100 ) / 10;
num13 = ( VALUE2 % 1000 ) / 100;
num14 = VALUE2 / 1000;
val10 = num11 + num12 * SYS8 + num13 * SYS8 * SYS8 + num14 * SYS8 * SYS8 * SYS8;

return 0;
}

