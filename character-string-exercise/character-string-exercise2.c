
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Klavyeden girilen bir cümlenin kaç karakterden oluştuğunu stren()
    // fonksiyonunu kullanmadan bulan C programını yazınız.

    char sentence[100];
    int j;

    printf("Please enter a sentence\n");
    gets(sentence);

    while (sentence[j])
    {

        j++;
    }

    printf("number of characters in the sentence :%d\n", j);

    return 0;
}