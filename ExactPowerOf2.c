#include <stdio.h>

int main()
{
    int num, result;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    result = 1 << num;

    printf("Power:2^%d is %d \n", num, result);

    return 0;
}
