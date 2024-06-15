#include <stdio.h>
#include <math.h>

int calculate(float x){
    float y;

    int calculate1(float x){
        y = pow(x, 3) - 5 * pow(x, 2);
        printf("Value of 'y': %0.2f", y);
        return 0;
    }

    int calculate2(float x){
        y = pow(x, 2) - 3;
        printf("Value of 'y': %0.2f", y);
        return 0;
    }

    if (x > 0 && x <= 5){
        calculate1(x);
        }

    else if ((x >= -32 && x <= -20) || (x > 10)){
        calculate2(x);
        }

    else{
        printf("Function is not defined for this 'x'");
    }
    return 0;
}

int main()  
{   
    float x;

    printf("Enter value of 'x': ");
    scanf("%f", &x);

    calculate(x);

    return 0;
} 