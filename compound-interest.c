#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;
    int n;

   
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + rate/(n*100)), n*time);
    compoundInterest = amount - principal;

    
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
