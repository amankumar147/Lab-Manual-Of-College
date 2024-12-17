#include<stdio.h>
#include<conio.h>

int main(){
    int num1,num2,sum;

    printf("Enter number num1: ");
    scanf("%d",&num1);

    printf("Enter number num2: ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("Sum = %d",sum);

    getch();
    return 0;

}