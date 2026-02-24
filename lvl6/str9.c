#include <stdio.h>
#include <string.h>

/*Program to decrypt a string encrypted in problem number(str9.c) by subtracting 1 to its ASCII value of its characters*/

void decrypt(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s\n", str);
}

int main()
{
    char str[] = "Sjubn";
    decrypt(str);
    return 0;
}
