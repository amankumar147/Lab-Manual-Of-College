#include <stdio.h>

int main() {
    int ringType, engravedUnits;
    float totalCost;

    // Display options for ring types
    printf("Select ring type:\n");
    printf("1. Gold plated ring (Base cost: Rs. 500, Rs. 70.30 per engraved unit)\n");
    printf("2. Solid gold ring (Base cost: Rs. 1000, Rs. 10.40 per engraved unit)\n");
    printf("3. Silver plated ring (Base cost: Rs. 300, Rs. 5.10 per engraved unit)\n");

    // Input ring type
    printf("Enter ring type (1, 2, or 3): ");
    scanf("%d", &ringType);

    // Input the number of engraved units
    printf("Enter the number of engraved units: ");
    scanf("%d", &engravedUnits);

    // Calculate total cost directly
    if (ringType == 1) {
        // Gold plated ring
        totalCost = 500 + (70.30 * engravedUnits);
    } else if (ringType == 2) {
        // Solid gold ring
        totalCost = 1000 + (10.40 * engravedUnits);
    } else if (ringType == 3) {
        // Silver plated ring
        totalCost = 300 + (5.10 * engravedUnits);
    } else {
        // Invalid ring type
        printf("Invalid ring type!\n");
        return 1;  // Exit with an error code
    }

    // Output the total cost
    printf("The total cost for the ring is: Rs. %.2f\n", totalCost);

    return 0;
}
