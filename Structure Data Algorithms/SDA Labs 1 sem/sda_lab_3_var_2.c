#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *A, n, temp; // 3

    srand(time(0));

    printf("Enter list size: ");
    scanf("%d", &n); // 1

    A = malloc(sizeof(int)*4*n); // 1

    printf("Unedited list: \n| ");

    for (int i = 0; i < (4*n); i++){ // 4*n
        A[i] = rand()%10; // 4*n
        printf("%d ", A[i]);
        if (i != 0 && (i+1) % n == 0){ // 4*n
            printf("| ");
        }
    }

    for (int i = 0; i < n; i++){ // n

        // swap 1 and 3 parts
        temp = A[i]; // n
        A[i] = A[2*n+i]; // n
        A[2*n+i] = temp; // n

        // swap 2 and 4 parts
        temp = A[n+i]; // n
        A[n+i] = A[3*n+i]; // n
        A[3*n+i] = temp; // n
    }

    int counter = 3*n-1; // 1

    for (int i = 2*n; i < counter; i++){ // n/2
        temp = A[i]; // n/2
        A[i] = A[counter]; // n/2
        A[counter] = temp; // n/2
        counter--; // n/2
    }

    printf("\nEdited list: \n| ");

    for (int i = 0; i < (4*n); i++){ // 4*n
        printf("%d ", A[i]);
        if (i != 0 && (i+1) % n == 0){ // 4*n
            printf("| ");
        }
    }

    for (int i = 0; i < n; i++){
        // swap 2 and 3 parts
        temp = A[n+i];
        A[n+i] = A[2*n+i];
        A[2*n+i] = temp;
    }

    printf("\nre-Edited list: \n| ");
    
    // Swap 2 and 3 sections.
    for (int i = 0; i < (4*n); i++){ // 4*n
        printf("%d ", A[i]);
        if (i != 0 && (i+1) % n == 0){ // 4*n
            printf("| ");
        }
    }

    free(A);
    
    return 0;
    }

    // Actions ~ 29.5*n + 6