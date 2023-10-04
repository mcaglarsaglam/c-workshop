
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Klavyeden küççük harflerle girilen bir cümle içerisinde en fazla kullanılan
    // karakterin bulmasını saglayan bir C programını yazınız.

    char sentence[150];
    int j = 0;
    int most;
    char letter;
    int lowercase[26] = {0};

    printf("Please enter a sentence\n");
    gets(sentence);

    while (sentence[j])
    {
        if (sentence[j] >= 'a' && sentence[j] <= 'z')
        {
            lowercase[sentence[j] - 'a']++;
        }
        j++;
    }

    most = lowercase[0];
    for (j = 1; j < 26; j++)
    {
        if (lowercase[j] != 0)
        {
            if (lowercase[j] > most)
            {
                most = lowercase[j];
                letter = j + 'a';
            }
        }
    }
    printf("Most used letter: %c", letter);

    return 0;
}