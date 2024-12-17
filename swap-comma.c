#include<stdio.h>

 int main()

{
int a,b;

printf("Enter a:");
scanf("%d",&a);
printf("Enter b:"); 
scanf("%d",&b);

printf ("before swap a:%d\n",a);
printf ("before swap n:%d\n",b);

a=a+b, b=a-b, a=a-b;

printf("after swap a:%d\n",a);
printf("after swap b:%d\n",b);

return 0;


}