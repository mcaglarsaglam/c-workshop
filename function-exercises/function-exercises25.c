
#include <stdio.h>
#include <stdlib.h>

float C(float f)
{
  return (5.0 / 9.0) * (f - 32);
}
float F(float c)
{
  return (9.0 / 5.0 * c) + 32;
}

int main()
{

  // Kullanıcı tarafından derece olarak girilen bir değeri Fahrenaytt'a
  // Fahrenayt olarak girilen bir değeri dereceye dönüştürülmesini sağlayan C
  // programını foksiyon kullanarak yazınız.

  // f=(1.8*c)+32      c=(5/9)*(f-32)

  float f;
  float c;
  int vote;

  printf("1 Fahrenheit => Degree\n");
  printf("2 Degeree => Fahrenheit\n");
  scanf("%d", &vote);

  if (vote == 1)
  {
    printf("Please enter Fahrenheit value\n");
    scanf("%f", &f);
    printf("%f F = %f C\n", f, C(f));
  }
  else if (vote == 2)
  {
    printf("Please enter the degree value\n");
    scanf("%f", &c);
    printf("%f C = %f F\n", c, F(c));
  }
  else
  {
    printf("Please enter a valid value\n");
  }

  return 0;
}