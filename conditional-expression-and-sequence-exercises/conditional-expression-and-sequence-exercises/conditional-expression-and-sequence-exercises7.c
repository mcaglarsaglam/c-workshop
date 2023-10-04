
#include <stdio.h>
#include <stdlib.h>
#define full 150

int main()
{

  // B ir sınıfta bulunan öğrencilerden hangisinin boyunun 150 cm'ye en yakın
  // olduğunu hesaplayan bir program yazınız.Bu program öğrenci numaralarını ve
  // santimetre cinsinden boy uzunluklarını girdi olarak almaktadır.Öğrenci
  // numarası negatif bir sayı girilinceye kadar veri girişi devam etmektedir.

  // Örnek çıktı:
  // Öğrenci no:124/Öğrenci boyu:167
  // Öğrenci no:7540/Öğrenci boyu:154
  // Öğrenci no:566/Öğrenci boyu:148
  // Öğrenci no:-2149/Öğrenci boyu:166
  // 566 numaralı öğrenci 148cm boyuyla 150cm'ye en yakındır.

  int number;
  int size;
  int difference;
  int minsize;
  int minnumber;

  printf("student number :\n");
  scanf("%d", &number);
  printf("studen size :\n");
  scanf("%d", &size);

  minnumber = number;
  difference = abs(size - full);

  while (number > 0)
  {
    printf("\nstudent number: ");
    scanf("%d", &number);
    printf("\nstudent size: ");
    scanf("%d", &size);

    if (abs(size - full) < difference)
    {
      difference = abs(size - full);
      minnumber = number;
      minsize = size;
    }
  }
  printf("Student %d is closest to %dcm at %d cm height", minnumber, minsize, full);
  return 0;
}