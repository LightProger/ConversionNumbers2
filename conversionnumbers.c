#include <stdio.h>

/* Ввести число
 * Если введено не число, выйти из программы
 * Превести число из десятичной системы в троичную
 * Записать все в массив и вывести на экран в перевернутом виде
 */

void conversionNumbers(int number);

int main ()
{
  int number = 0;

  printf("Введите целое десятичное число, больше нуля:\n");
  scanf("%i", &number);

  if(number < 1) { printf("Ошибка ввода!"); }
  else { conversionNumbers(number); }
  printf("\n");
  return 0;
}


void conversionNumbers(int number)
{
  int i, k;
  int array[20];

  i = 0;
  while(number > 0)
    {
      array[i] = number % 3;
      number /= 3;
      i++;
    }

  for(k = i - 1; k >= 0; k--) { printf("%i", array[k]); }

  return;
}

