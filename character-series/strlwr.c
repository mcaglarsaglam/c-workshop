
#include <stdio.h>
#include <ctype.h>

void strlwr_custom(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    char caglar[100];

    printf("Please enter a text\n");
    fgets(caglar, sizeof(caglar), stdin);

    printf("The expression you entered: %s\n", caglar);
    strlwr_custom(caglar);
    printf("Lowercase version of the phrase you entered: %s\n", caglar);

    return 0;
}