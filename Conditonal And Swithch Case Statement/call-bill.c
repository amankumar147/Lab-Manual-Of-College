#include <stdio.h>

int main() {
    int calls;
    float bill;

    // Input the number of calls made
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    // Calculate bill based on number of calls
    if (calls <= 50) {
        bill = 100;  // Minimum bill for up to 50 calls
    }
    else if (calls <= 100) {
        bill = 100 + (calls - 50) * 0.80;  // Rs. 0.80 per call for next 50 calls
    }
    else if (calls <= 200) {
        bill = 100 + 50 * 0.80 + (calls - 100) * 0.60;  // Rs. 0.60 per call for next 100 calls
    }
    else {
        bill = 100 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;  // Rs. 0.40 per call beyond 200
    }

    // Output the total bill
    printf("Your total telephone bill is: Rs. %.2f\n", bill);

    return 0;
}
