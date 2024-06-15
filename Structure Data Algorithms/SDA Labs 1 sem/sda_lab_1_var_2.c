#include <stdio.h>
#include <math.h>

int calculate(float x){
    float y;

    void invalid_value(){
        printf("Function is not defined for this 'x'");
    }

    float formula1(float x){
        y = pow(x, 3) - 5 * pow(x, 2);
        printf("Value of 'y': %0.2f", y);
        return y;
    }

    float formula2(float x){
        y = pow(x, 2) - 3;
        printf("Value of 'y': %0.2f", y);
        return y;
    }

    if (x < -32){
        invalid_value();
    }

    else if (x < -20){
        formula2(x);
    }
    
    else if (x <= 0){
        invalid_value();
    }

    else if (x <= 5){
        formula1(x);
    }

    else if (x <= 6){
        invalid_value();
    }

    else if (x < 9){
        formula2(x);
    }

    else if (x <= 10){
        invalid_value();
    }
    else{
        formula2(x);
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

