
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Aşağıda belirtilen işlemleri yapan bir C programı yazınız.
  // Toplama (+) veya çıkarma (-) operatörü giriniz.

  // '+'operatörünü için 1/a+1/b; '-' operatörü için 1/a-1/b işlemlerinin
  // sonucunu basit kesir cinsinden bulunuz.

  // Grilen a veya b değerlerinden biri 0 ise işlemin yapılamayacağını bir mesaj
  // ile beliirtiniz.

  // Örnek çıktı
  // işleminizi seçiniz (+,-): +
  // iki tam sayı giriniz : 5,8
  // 1/5 + 1/8 =13/40

  int number1;
  int number2;
  char op;

  printf("Please select your action,(+,-) :\n");
  scanf("%c", &op);
  printf("Please enter two integers\n");
  scanf("%d", &number1);
  scanf("%d", &number2);

  if ((number1 == 0) || (number2 == 0))
  {
    printf("Unable to process\n");
  }
  else
  {
    printf("1/%d %c 1/%d\n", number1, op, number2);
    switch (op)
    {
    case '+':
    {
      printf("%d/%d", number1 + number2, number1 * number2);
    }
    break;

    case '-':
    {
      printf("%d/%d", number1 - number2, number1 * number2);
    }
    break;

    default:
    {
      printf("wrong operator");
    }
    }
  }

  return 0;
}