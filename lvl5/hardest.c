#include <stdio.h>

/* Program to create a 3D array and print its addresses in decreasing order */

int main() {
    int i, j, k;
    
    // 1. Take array dimensions from the user
    printf("Enter dimension 1: ");
    scanf("%d", &i);
    printf("Enter dimension 2: ");
    scanf("%d", &j);
    printf("Enter dimension 3: ");
    scanf("%d", &k);
    
    // Safety check: ensure positive dimensions
    if(i <= 0 || j <= 0 || k <= 0) {
        printf("Dimensions must be positive.\n");
        return 1;
    }

    // 2. Declare the 3D Variable Length Array (VLA)
    int array[i][j][k];
    
    // We only need ONE set of nested loops for this
    printf("\nEnter %d elements for the array:\n", i * j * k);
    for(int a = 0; a < i; a++) {
        for(int b = 0; b < j; b++) {
            for(int c = 0; c < k; c++) {
                // Use the loop variables a, b, c to index
                scanf("%d", &array[a][b][c]);  
            }
        }
    }

    // 3. Print addresses in decreasing order using a pointer
    // Point ptr to the very LAST element in the 3D array
    int* ptr = &array[i-1][j-1][k-1];
    int total_elements = i * j * k;
    
    printf("\nAddresses in decreasing order:\n");
    
    // Loop through the total number of elements
    for(int count = 0; count < total_elements; count++) {
        // Cast to (void*) for safe pointer printing
        printf("%p\n", (void*)ptr); 
        
        // Decrement the pointer to move backward in memory
        ptr--; 
    }
    
    return 0;
}
