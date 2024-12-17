#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: \n");
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    // Display numbers before swapping
    printf("Before swapping: a : %d\n", a);
    printf("Before swapping: b : %d\n", b);

    // Swapping using bitwise XOR operator
    a = a ^ b;  // Step 1: a becomes a XOR b
    b = a ^ b;  // Step 2: b becomes (a XOR b) XOR b = a
    a = a ^ b;  // Step 3: a becomes (a XOR b) XOR a = b

    // Display numbers after swapping
    printf("after swapping: a : %d\n", a);
    printf("after swapping: b : %d\n", b);

    return 0;
}
