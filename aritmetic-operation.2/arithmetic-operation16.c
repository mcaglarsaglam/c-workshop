
#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan büyük harf tipinde bir karakter girmesini isteyin.
  // Eğer girdiğiniz karakter büyük harf ise o harfi küçük harf olarak bastırın.
  // Eğer girdiğiniz karakter küçük harf ise ekrana hata mesajı bastırın.

  char letter;

  printf("Please enter a letter\n");
  scanf("%c", &letter);

  if ((letter >= 'A') && (letter <= 'Z'))
  {
    printf("our lowercase letter %c\n", tolower(letter));
  }
  else
  {
    printf("MISTAKE!! you entered in lowercase");
  }
  return 0;
}