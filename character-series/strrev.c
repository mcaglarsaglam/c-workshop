
#include <stdio.h>
#include <string.h>

void strrev_custom(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char caglar[100];

    printf("Please enter a text\n");
    scanf("%s", caglar);

    printf("The expression you entered: %s\n", caglar);
    strrev_custom(caglar);
    printf("A reversed version of the expression you entered: %s\n", caglar);

    return 0;
}
