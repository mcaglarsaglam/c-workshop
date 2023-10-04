
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Klavyeden girilen bir cümlenin harflerinin alt alta yazdırmasını sağlayan C
    // programı yazınız.

    int j;
    char sentence[100];

    printf("Please enter a sentence\n");
    gets(sentence);

    for (j = 0; sentence[j]; j++)
    {
        printf("%c\n", sentence[j]);
    }

    return 0;
}