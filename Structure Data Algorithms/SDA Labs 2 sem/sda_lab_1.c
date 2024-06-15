#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void display(int n, float matrix[][n]){
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%0.2f\t", matrix[i][j]);
        }
        printf("\n");
    }        
}

void fill_matrix(int n, int minval, int maxval, float matrix[][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {   
            matrix[i][j] = minval + rand() % (maxval - minval + 1);
        }
    }
}

void get_side_diagonal(int n, float diagonal[n], float matrix[][n]){
    for (int i = 0; i < n; i++){
        diagonal[i] = matrix[i][n-i-1];
        printf("%0.2f\t", diagonal[i]);
    }
}

void swap(float* xp, float* yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int n, float arr[n])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int binSearch(int n, float arr[n], float value){ 
    int left = -1;                      
    int right = n - 1;  
    while (left < right - 1){                
        int mid = (left + right) / 2;            
        if (arr[mid] < value)
            left = mid;
        else 
            right = mid;
    }
    return right;
}

// if (arr[mid] <= value)
// ...
// return left; - for last right index. Standartly - left.

int main(){
    
    srand(time(0));
    
    int n;
    int minval, maxval;
    printf("Enter matrix dimension: ");
    scanf("%d", &n);
    printf("Enter min value: ");
    scanf("%d", &minval);
    printf("Enter max value: ");
    scanf("%d", &maxval);

    float A[n][n];
    float diagonal[n];

    fill_matrix(n, minval, maxval, A);

    display(n, A);

    printf("\nSide diagonal is: \n");

    get_side_diagonal(n, diagonal, A);

    bubbleSort(n, diagonal);

    printf("\n\nSorted side diagonal: \n");

    for(int i = 0; i < n; i++)
        printf("%0.2f\t", diagonal[i]);

    float value;

    printf("\nEnter value to search: ");
    scanf("%f", &value);

    printf("Index of searched value is: %d", binSearch(n, diagonal, value));

    return 0;   
} 