#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    printf("\n");

    int *A, n, B[1]; // 3

    srand(time(0));

    printf("Enter sections count: ");
    scanf("%d", &n); // 1

    A = malloc(sizeof(int)*4*n); // 1

    printf("Unedited list: \n| ");

    for (int i = 0; i < (4*n); i++){ // 4*n
        A[i] = rand()%10; // 4*n
        printf("%d ", A[i]);
        if (n == 1 || i != 0 && (i+1) % n == 0){ // 4*n
            printf("| ");
        }
    }

    for (int i = 0; i < n; i++){ // n

        // swap 1 and 3 parts
        B[0] = A[i]; // n
        A[i] = A[2*n+i]; // n
        A[2*n+i] = B[0]; // n

        // swap 2 and 4 parts
        B[0] = A[n+i]; // n
        A[n+i] = A[3*n+i]; // n
        A[3*n+i] = B[0]; // n
    }

    int counter = 3*n-1; // 1

    for (int i = 2*n; i < counter; i++){ // n/2
        B[0] = A[i]; // n/2
        A[i] = A[counter]; // n/2
        A[counter] = B[0]; // n/2
        counter--; // n/2
    }

    printf("\nEdited list: \n| ");

    for (int i = 0; i < (4*n); i++){ // 4*n
        printf("%d ", A[i]);
        if (n == 1 || i != 0 && (i+1) % n == 0){ // 4*n
            printf("| ");
        }
    }

    free(A);
    
    printf("\n");

    return 0;
    }

    // Actions ~ 29.5*n + 6