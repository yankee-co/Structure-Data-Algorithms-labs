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
    int min = matrix[0][0];
    int coord1, coord2;
    for (int r = 0; r <  rows; r++){
        for (int c = 0; c <  columns; c++){
            if (min >= matrix[c][r]){
                min = matrix[c][r];
                coord1 = c;
                coord2 = r;
            }
        }
    }    
    printf("\nMinimum element: %d, coords: (%d, %d)", min, coord1+1, coord2+1);
}

int main(){

    srand(time(0));
    
    int matrix[7][7];
    fill_matrix(7,7, matrix);

    printf("\nMatrix:");
    display_matrix(7, 7, matrix);

    find_min(7, 7, matrix);

    return 0;
}

// Варіант 12
// Задано матрицю цілих чисел A[m,n]. При обході матриці по
// стовпчиках знайти в ній останній мінімальний елемент і його
// місцезнаходження (координати).