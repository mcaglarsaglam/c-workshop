
#include <stdio.h>
#include <stdlib.h>
#define PI 3

void compute(float radius)
{
  float area, perimeter;
  area = PI * radius * radius;
  perimeter = 2 * PI * radius;
  printf("Area of circle =%.4f\n", area);
  printf("Circumference of circle =%.2f\n", perimeter);
}
int main()
{

  // Kullanıcı tarafından girilen yarıçap değeri kullanılarak bir dairenin
  // alanını ve çevresini hesaplayan fonksiyon prototipi aşağıda
  // verilmiştir.Uygun C programını ve fonksiyonunu yazınız.

  // void hesapla(float yarıçap)

  float radius;

  printf("please enter radius value\n");
  scanf("%f", &radius);
  compute(radius);

  return 0;
}