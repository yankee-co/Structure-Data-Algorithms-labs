#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void InsertionSort(int n, int mass[])
{
    int newElement, location;
 
    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i;
        while (location > 0 && newElement > mass[location-1]){
            mass[location] = mass[location-1];
            location--;
        }
        mass[location] = newElement;
    }
}

void display(int m, int n, int matrix[m][n]){
    printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }        
}

void fill_matrix(int m, int n, int minval, int maxval, int matrix[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {   
            matrix[i][j] = minval + rand() % (maxval - minval + 1);
        }
    }
}

void main(){
    srand(time(0));
    int m = 7, n = 5, A[m][n], column[m];
    
    // Fill empty matrix with random numbers within some range (min value - third value, max value - fourth value) (1; 10)
    fill_matrix(m, n, 1, 10, A);
    printf("\nMatrix:\n");
    display(m, n, A);
    for (int row = 0; row < n; row++){
        for (int i = 0; i < m; i++){
            // Take column
            column[i] = A[i][row];
        }
        // Sort column
        InsertionSort(m, column);
        // Insert sorted column into matrix instead of an old one
        for (int i = 0; i < m; i++){
            A[i][row] = column[i];
        }
    }

    printf("\nSorted matrix:\n");
    // Display sorted matrix
    display(m, n, A);

}