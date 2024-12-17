#include<stdio.h>
#include<conio.h>

int main(){

    int rid;
    float pi = 3.14;
    printf("Enter radios : ");
    scanf("%d",&rid);

    float area = pi*rid*rid;
    float perimeter = 2*pi*rid;

    printf("Area of circle : %f\n",area);
    printf("perimeter of circle : %f\n",perimeter);
    getch();
    return 0;

    
}