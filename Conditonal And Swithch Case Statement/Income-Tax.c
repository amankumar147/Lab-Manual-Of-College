// Write a program to input the annual taxable income and 
// compute the tax according to the given condition.


#include<stdio.h>

void main(){
    float income;
    float tex;

    printf("Enter income:");
    scanf("%f",&income);

    if(income>250000){
        tex = 25000 + (30*(income-250000)/100);
        printf("total tex = %f",tex);
    }
    else if(income>150000){
        tex = 5000 + (20*(income-150000)/100);
        printf("total tex = %f",tex);
    }
    else if(income>100000){
        tex = (10*(income-100000)/100);
        printf("total tex = %f",tex);
    }
    else{
        tex = 0;
        printf("total tex = %f",tex);
    }

}