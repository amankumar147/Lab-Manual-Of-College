#include <stdio.h>

int main() {

    int num1, num2,num3, greatest;
    
    printf("Enter  numb1: ");
    scanf("%d", &num1);
    printf("Enter  num2: ");
    scanf("%d", &num2);
    printf("Enter  num3: ");
    scanf("%d", &num3);

    greatest = (num1 > num2) ?((num1>num3)?num1:num3) :((num2>num3)) ? num2:num3;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
