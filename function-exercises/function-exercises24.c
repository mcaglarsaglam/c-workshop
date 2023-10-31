
#include <stdio.h>
#include <stdlib.h>

void dialer(int second)
{
  int hour;
  int time;
  int minute;
  int s;

  hour = second / 3600;
  time = second % 3600;
  minute = time / 60;
  s = time % 60;
  printf("%d:%d:%d", hour, minute, s);
}

int main()
{

  // Kullanıcı tarafından saniye olarak girilen bir değerin
  // saat:dakika:saniye(hh:mm:ss) formatında dönüştürülmesini sağlayan C
  // programını fonksiyon kullanarak yazınız.

  int second;
  printf("Please enter seconds\n");
  scanf("%d", &second);
  dialer(second);

  return 0;
}