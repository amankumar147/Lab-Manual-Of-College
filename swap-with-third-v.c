#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers:\n");
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

 printf ("before swap a:%d\n",a);
 printf ("before swap n:%d\n",b);

    c = a;
    a = b;
    b = c;

   printf("after swap a:%d\n",a);
   printf("after swap b:%d\n",b);

    return 0;
}
