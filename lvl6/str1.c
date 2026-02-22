#include <stdio.h>
/*Program to create a string and print its characters*/

int main()
{
    char s[] = "Ritam";
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c\t", s[i]);
    }
    return 0;
}