
#include <stdio.h>
#include <ctype.h>

void strupr_custom(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    char caglar[100];

    printf("Please enter a text\n");
    fgets(caglar, sizeof(caglar), stdin);

    printf("The expression you entered: %s\n", caglar);
    strupr_custom(caglar);
    printf("Capitalized version of the phrase you entered: %s\n", caglar);

    return 0;
}