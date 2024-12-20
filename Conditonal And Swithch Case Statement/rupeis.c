// 3. Write a currency program that tells you how many 500,200,100,50,20,10,5,2 and 1 Rs. notes will be needed for a given amount of money


#include <stdio.h>

int main() {
    int amount;
    int fiveHundreds, twoHundreds, oneHundreds, fifties, twenties, tens, fives, twos, ones;

    // Input the amount of money
    printf("Enter the amount of money: ");
    scanf("%d", &amount);

    // Calculate the number of 500 Rs. notes
    fiveHundreds = amount / 500;
    amount = amount % 500;

    // Calculate the number of 200 Rs. notes
    twoHundreds = amount / 200;
    amount = amount % 200;

    // Calculate the number of 100 Rs. notes
    oneHundreds = amount / 100;
    amount = amount % 100;

    // Calculate the number of 50 Rs. notes
    fifties = amount / 50;
    amount = amount % 50;

    // Calculate the number of 20 Rs. notes
    twenties = amount / 20;
    amount = amount % 20;

    // Calculate the number of 10 Rs. notes
    tens = amount / 10;
    amount = amount % 10;

    // Calculate the number of 5 Rs. notes
    fives = amount / 5;
    amount = amount % 5;

    // Calculate the number of 2 Rs. coins
    twos = amount / 2;
    amount = amount % 2;

    // Calculate the number of 1 Rs. coins
    ones = amount;

    // Output the result
    printf("500 Rs. notes: %d\n", fiveHundreds);
    printf("200 Rs. notes: %d\n", twoHundreds);
    printf("100 Rs. notes: %d\n", oneHundreds);
    printf("50 Rs. notes: %d\n", fifties);
    printf("20 Rs. notes: %d\n", twenties);
    printf("10 Rs. notes: %d\n", tens);
    printf("5 Rs. notes: %d\n", fives);
    printf("2 Rs. coins: %d\n", twos);
    printf("1 Rs. coins: %d\n", ones);

    return 0;
}
