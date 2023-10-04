
#include <stdio.h>
#include <stdlib.h>
#define rabbitspeed 0.038 // Tavşanların yıllık artış oranı %3.8
#define birdspeed 0.012   // Kuşların yıllık artış oranı %1.2

int main()
{

  // Bir çiflikte tavşanların sayısı 1042 iken,kuşların sayısı 2272'dir.Bir
  // yılda tavşanların %3.8 oranında çoğalırken,kuşlar %1.2 oranında
  // çoğalmaktadır.Tavşaların kuşların sayısını kaç yıl sonra geçecegini bulan
  // bir C programı yazınız.

  float rabbit = 1042;
  float bird = 2272;
  int year = 0;

  while (rabbit < bird)
  {
    rabbit += rabbit * rabbitspeed;
    bird += bird * birdspeed;
    year++;

    printf("%d.year: rabbit=%d,bird=%d\n", year, (int)rabbit, (int)bird);
  }

  printf("Rabbits overtake birds in %d .years", year);

  return 0;
}