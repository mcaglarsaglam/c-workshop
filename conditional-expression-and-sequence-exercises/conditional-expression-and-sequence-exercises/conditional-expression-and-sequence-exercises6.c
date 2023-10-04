
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // 1/x^2+3/x^4...2n-1/x^2n Seri hesaplamayı birden fazla n ve x çifleri için
  // hesaplayacak şekilde yeniden yazınız.Proglamlamada her seri hesaplamasından
  // sonra kullanıcıya devam edilip edilmeyeceği sorulmalıdır.Kullanıcı devam
  // etmek istiyor ise evet anlamında 'E'veya 'e' girmelidir.Diğer karakter
  // girişlerinde ise program sonlandırılmalıdır.

  // Örnek çıktı

  // Pozitif tamsayı:3
  // Reel sayı:1.0
  // Seri:9.00
  // Devaam edecek misiniz:E

  // Pozitif tamsayı:2
  // Reel sayı:1.5
  // Seri:1.04
  // Devaam edecek misiniz:H
  // Hoşçakalınnnn

  int number1;
  int number2;
  float real;
  float layout;
  char con;

  do
  {
    printf("Enter a positive number :\n");
    scanf("%d", &number2);
    printf("real number :");
    scanf("%f %c", &real, &con);

    for (number1 = 1; number1 <= 2 * number2 - 1; number1 += 2)
    {
      layout += number1 / pow(real, number1 + 1);
    }
    printf("layout = %f\n", layout);

  } while ((con == 'E') || (con == 'e'));

  printf("goodbye");

  return 0;
}