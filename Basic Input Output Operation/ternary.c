#include <stdio.h>

int main() {

    int num1, num2, greatest;
    
    printf("Enter  numb1: ");
    scanf("%d", &num1);
    printf("Enter  num2: ");
    scanf("%d", &num2);

    greatest = (num1 > num2) ? num1 : num2;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
