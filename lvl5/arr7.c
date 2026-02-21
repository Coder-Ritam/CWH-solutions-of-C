#include <stdio.h>

void reverse(int arr[], int size);

int main() {
    int elem, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &elem); 
    int array[elem];

    printf("Enter the numbers:\n");
    for (i = 0; i < elem; i++) {
        scanf("%d", &array[i]); 
    }

    reverse(array, elem);

    printf("Reversed array: ");
    for (i = 0; i < elem; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void reverse(int arr[], int size) {
    int start = 0;   
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
