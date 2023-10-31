
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float area(float A, float B, float C)
{
  float u;
  float area;

  u = (A + B + C) / 2;
  area = sqrt(u * (u - A) * (u - B) * (u - C));

  return area;
}

int main()
{

  // Kenar uzunlukları birbirinden farklı eşkenar bir üçgenin alanının
  // bulunmasını sağlayan C programını fonksiyon kullanarak yazınız.
  // u=(a+b+c)/2
  // Alan^2=u*(u-a)*(u-b)*(u-c)

  float a, b, c;

  printf("Please enter the side lengths of the equilateral triangle\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a == b && b == c)
  {
    printf("Area of the equilateral triangle = %.2f\n", area(a, b, c));
  }
  else
  {
    printf("The given sides do not form an equilateral triangle.\n");
  }

  return 0;
}