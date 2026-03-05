#include <stdio.h>

/*Simple program to read three integers from a file*/

int main() {
    FILE *fptr;
    int num1, num2, num3;

    fptr = fopen("ritam.txt", "r");

    if (fptr == NULL) {
        printf("Error! Could not open file or file does not exist.\n");
        
        return 1;
    }
    int items_read = fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    if (items_read == 3) {
        printf("Successfully read the following integers from the file:\n");
        printf("Number 1: %d\n", num1);
        printf("Number 2: %d\n", num2);
        printf("Number 3: %d\n", num3);
    } else {
        printf("Error reading data. Only %d values were successfully read.\n", items_read);
    }
    fclose(fptr);
    return 0;
}
