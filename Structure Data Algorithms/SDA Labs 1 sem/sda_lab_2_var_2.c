#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float P = 1, j_sum = 0;

        printf("\nEnter value of 'n': ");
        scanf("%d", &n);

        if (n >= 1){

            for (int i = 1; i <= n; i++)
            {
                j_sum += (i - sin(i));

                P *= (i + cos(i)) / j_sum;

            }

            printf("P = %0.7f", P);
        }

        else{
            printf("Wrong input data");
        }
    return 0;
}

