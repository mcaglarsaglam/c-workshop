
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan aldığı tam sayı uzunlukları (a,b) ve yükseklik (h) bilğisini
  // kullanarak bir dikdörtğen prizmanın sırasıyla taban alanını,yanal
  // alanlarının taolamını,toplam alanını ve hacmini ekarana bastıran programın
  // C kodunu yazınız.

  int a, b, h;
  int base_area;
  int lateral_area;
  int total_area;
  int volume;

  printf("Please enter a b and h values\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &h);

  base_area = a * b;
  lateral_area = 2 * a * h + 2 * b * h;
  total_area = 2 * a * b + 2 * a * h + 2 * b * h;
  volume = a * b * h;

  printf("base area=%d\n", base_area);
  printf("lateral area=%d\n", lateral_area);
  printf("total area=%d\n", total_area);
  printf("volume=%d\n", volume);

  return 0;
}