#include <stdio.h>
#include <math.h>

double calculate_term(int i)
{
    if (i == 1)
        return 1.0;
    else
        return log(calculate_term(i - 1) + 3.0) + sqrt((double) i);
}

double sum_recursive_descent(int p)
{
    if (p == 1)
        return calculate_term(1);
    else
        return sum_recursive_descent(p - 1) + calculate_term(p);
}

double sum_recursive_return(int p)
{
    if (p == 1)
        return calculate_term(1);
    else
        return calculate_term(p) + sum_recursive_return(p - 1);
}

double sum_recursive_both(int p, double term)
{
    if (p == 1)
        return term;
    else {
        double prev_term = calculate_term(p - 1);
        double prev_sum = sum_recursive_both(p - 1, prev_term);
        return term + prev_sum;
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 1; i <= n; i++){
        sum += calculate_term(i);
    }
    
    printf("Sum of first %d terms using iterative approach: %f\n", n, sum);

    printf("Sum of first %d terms using recursive descent: %f\n", n, sum_recursive_descent(n));

    printf("Sum of first %d terms using recursive return: %f\n", n, sum_recursive_return(n));

    printf("Sum of first %d terms using recursive descent and return: %f\n", n, sum_recursive_both(n, calculate_term(n)));

    return 0;
}