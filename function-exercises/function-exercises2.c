
#include <stdio.h>
#include <stdlib.h>

float transactions(float a, float b, char process)
{
  if (process == '+')
  {
    return a + b;
  }
  else if (process == '-')
  {
    return a - b;
  }
  else if (process == '*')
  {
    return a * b;
  }
  else if (process == '/')
  {
    return a / b;
  }
  else
  {
    printf("you entered the wrong operator");
  }
}

int main()
{

  // Klavyeden girilen iki tam sayının toplamını,farkını,çarpımını ve bölümünü
  // gerçekleştiren C programını foksiyon kullanarak yazınız.

  int number1;
  int number2;
  char process;

  printf("Please enter two numbers\n");
  scanf("%d", &number1);
  scanf("%d", &number2);

  // Önceki scanf çağrısından sonra giriş tamamlanması için getchar çağrısı
  getchar();

  printf("What action do you want to do?(+,-,*,/)\n");
  scanf("%c", &process);
  printf("result of the operation: %.2f", transactions(number1, number2, process));

  return 0;
}