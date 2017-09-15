#include <stdio.h>

/* Ввести число
 * Если введено не число, выйти из программы
 * Превести число из десятичной системы в троичную
 * вывести на экран 
 */

void conversionNumbers(int number);

int main ()
{
  int number = 0;

  printf("Введите целое десятичное число, больше нуля:\n");
  scanf(" %i", &number);

  while(getchar()!= '\n' || number < 1)
  { 
    printf("Введите целое десятичное число, больше нуля:\n");
    scanf(" %i", &number);
  }
  conversionNumbers(number); 
  printf("\n");
  return 0;
}


void conversionNumbers(int number)
{
 
  if (number < 3)
    printf("%i", number);
  else
    {
      conversionNumbers(number / 3);
      printf("%i", number % 3);
    }

  return;
}

