
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Klavyeden girilen bir kelimenin harflerini bir harf arttırarak aşağıdaki
    // gibi yazan C programını yazınız.
    // Kelime giriniz:Hiroşima
    // H
    // Hi
    // Hir
    // Hiro
    // Hiroş
    // Hiroşi
    // Hiroşim
    // Hiroşima

    char word[100];
    int j;
    int i;

    printf("Please enter a word\n");
    gets(word);

    while (i < strlen(word))
    {
        j = 0;
        while (j <= i)
        {
            printf("%c ", word[j]);
            j++;
        }
        printf("\n");

        i++;
    }
    return 0;
}