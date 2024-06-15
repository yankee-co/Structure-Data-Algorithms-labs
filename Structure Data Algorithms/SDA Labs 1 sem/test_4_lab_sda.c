#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fill_matrix(int rows, int columns, int matrix[rows][columns]){
    for (int i = 0; i <  rows; i++){
        for (int j = 0; j <  columns; j++){
            matrix[i][j] = rand()%10;
        }
    }
}
void display_matrix(int rows, int columns, int matrix[rows][columns]){
    for (int i = 0; i < rows; i++){
        printf("\n");
        for (int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
    }
}

void find_min(int rows, int columns, int matrix[rows][columns]){
    int min = matrix[0][0], coords;
    for (int i = 0; i < rows; i++){
            if (min > matrix[i][i]){
                min = matrix[i][i];
                coords = i;
            }
        }
    printf("\nMinimum element on its diagonal: %d, coords: (%d, %d)", min, coords+1, coords+1);
    }

int main(){

    srand(time(0));
   
    int matrix[7][7];
    fill_matrix(7,7, matrix);

    printf("\nMatrix:");
    display_matrix(7, 7, matrix);

    find_min(7,7, matrix);

    return 0;
}
