
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Bir üçgenin açılarını girdi olarak alan ve bu üçgenin eşit kenar,iki kenar
  // veya çeşit kenar üçgen olup olmadığını belirleyen bir C programı yazınız.
  // Açıların üçgen oluşturup oluşturmadığı da kontrol edilmelidir.

  // Örnek çıktı
  // Üç açı giriniz 30 45 105
  // Bu bir çeşit kenar üçgendir

  int angle1;
  int angle2;
  int angle3;

  printf("Please enter 3 angles :\n");
  scanf("%d", &angle1);
  scanf("%d", &angle2);
  scanf("%d", &angle3);

  if (angle1 + angle2 + angle3 == 180)
  {
    if (angle1 == 60 && angle2 == 60 && angle3 == 60)
    {
      printf("This is an equilateral triangle\n");
    }
    else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
    {
      printf("This is an isosceles triangle\n");
    }
    else
    {
      printf("This is a scalene triangle");
    }
  }
  else
  {
    printf("You cannot form a triangle with these angles.");
  }

  return 0;
}