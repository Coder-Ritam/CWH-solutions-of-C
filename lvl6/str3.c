#include <stdio.h>

int get_length(char s[]);

int main() {
    int input;
    printf("Enter the maximum length of the string: ");
    if (scanf("%d", &input) != 1) return 1;
    getchar(); 
    char s[input];
    printf("Enter the text: ");
    fgets(s, input, stdin);
    int length = get_length(s);
    if (length > 0 && s[length - 1] == '\n') {
        s[length - 1] = '\0';
        length--;
    }

    printf("The final string is: %s\n", s);
    printf("The number of characters is: %d\n", length);

    return 0;
}

int get_length(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
