
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Klavyeden girilen bir cümledeki kelime sayısını bulan bir C programı
    // yazınız.

    int j = 0;
    int counter = 0;
    char sentence[100];

    printf("Please enter a sentence.\n");
    gets(sentence);

    while (sentence[j])
    {
        if (sentence[j] == 32)
        {
            counter++;
        }
        j++;
    }
    printf("the number of words in the entered sentence:%d\n", counter + 1);

    return 0;
}