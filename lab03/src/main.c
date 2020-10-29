int main()
{
//Розрахунок за формулою
int n = (( 8 - 1 ) % 6 ) + 1;

//Перше завдання
#define RESISTOR1 2.2 //1 опір
#define RESISTOR2 5.3 //2 опір
#define RESISTOR3 3.5 //3 опір
float resistance; //Загальний опір
resistance = ( 1 / RESISTOR1 ) + ( 1 / RESISTOR2 ) + ( 1 / RESISTOR3 );

//Друге завдання
#define VALUE1 276
int num1; //Одиниці
int num2; //Десятки
int num3; //Сотні
int reverse; //Обернене число
num1 = VALUE1 % 10;
num2 = ( VALUE1 % 100 ) / 10;
num3 = ( VALUE1 % 1000 ) / 100;
reverse = num1 * 100 + num2 * 10 + num3;

//Третє завдання
#define A 7
int a2; //Друга степінь змінної А
int a4; //Четверта степінь змінної А
int a8; //Восьма степінь змінної А
int a10; //Десята степінь змінної А
a2 = A * A;
a4 = a2 * a2;
a8 = a4 * a4;
a10 = a8 * a2;

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

//Шосте завдання
#define MIN 31
#define MAX 92
int last; //Номер останнього числа
int sum; //Сума діфпазону
last = MAX - ( MIN - 1 );
sum = ( MIN + MAX ) * last / 2;

return 0;
}

