#include<stdio.h>


int main(){
float c,f;

printf("Enter temprature in Fahrenheit:");

scanf("%f",&f);

c= (f-32)*5/9;

printf(" celsius:%f\n",c);

return 0;

} 