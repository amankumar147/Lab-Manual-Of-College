// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int x;
// printf("Enter number:");
// scanf("%d",&x);
// if (x&1)
// printf ("%d is odd number ",x);
// else
// printf ("%d is even even ",x);
// getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int x;
// printf("Enter number:");
// scanf("%d",&x);
// if ((x|1)==x)
// printf ("%d is odd number ",x);
// else
// printf ("%d is even even ",x);
// getch();
// }


#include<stdio.h>
#include<conio.h>
void main()
{
int x;
printf("Enter number:");
scanf("%d",&x);
if ((x^1)<x)
printf ("%d is odd number ",x);
else
printf ("%d is even even ",x);
getch();
}