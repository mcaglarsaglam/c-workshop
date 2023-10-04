
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Bir pozitif tamsayı olan n değeri ile bir reel sayı olan x değerini girdi
  // olarak alan ve 1/x^2+3/x^4...2n-1/x^2n serisini hesaplayan program yazınız.

  // Örnek çıktı
  // Pozitif tamsayı:3
  // Reel sayı:1.0
  // Seri=9.00

  int number1;
  int number2;
  float real;
  float layout;

  printf("Enter a positive number :\n");
  scanf("%d", &number2);
  printf("real number :");
  scanf("%f", &real);

  for (number1 = 1; number1 <= 2 * number2 - 1; number1 += 2)
  {
    layout += number1 / pow(real, number1 + 1);
  }

  printf("layout = %f", layout);

  return 0;
}