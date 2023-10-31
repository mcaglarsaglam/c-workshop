
#include <stdio.h>
#include <stdlib.h>

double find(double N)
{
  if (N < 0.0)
  {
    printf("Please enter a valid value (non-negative number).\n");
    return -1.0; // Hatalı bir değer döndürme
  }

  double squareroot = N; // Başlangıç değeri olarak N kullanılabilir
  int j;

  for (j = 0; j < 50; j++)
  {
    squareroot = (squareroot + N / squareroot) / 2.0;
  }

  return squareroot;
}

int main()
{
  // Kullanıcı tarafından girilen bir N pozitf tamsayısının karakökünün
  // bulunmasını sağlayan (sqrt()kullanmadan) C programını fonksiyon kullanarak
  // yazınız ( A: Girilen Sayı)

  // K=A/2
  // Karekök = Toplam 1 den 50 ye kadar K^2+A/2K

  double number;
  printf("Enter the number for which you want to find the square root\n");
  scanf("%lf", &number);

  double result = find(number);

  if (result >= 0.0)
  {
    printf("%.5lf squareroot=%.5lf\n", number, result);
  }

  return 0;
}