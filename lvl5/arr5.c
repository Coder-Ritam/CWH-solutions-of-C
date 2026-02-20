#include <stdio.h>

void display(int rows, int columns, int array[rows][columns]);

int main(){
    int i, j;
    int rows, column;
    
    printf("enter number of rows required: \n");
    scanf("%d", &rows);
    printf("enter number of column required: \n");
    scanf("%d", &column);
    
    int array[rows][column];

    printf("enter the elements required: \n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < column; j++){
            scanf("%d", &array[i][j]);
        }
    }

    printf("The elements are:\n");
    display(rows, column, array); 
    
    return 0;
}

void display(int rows, int columns, int array[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}
