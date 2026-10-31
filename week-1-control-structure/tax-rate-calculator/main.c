#include <cs50.h>
#include <stdio.h>

int main() {
    float userItemPrice, rate, total, taxTotal;

    userItemPrice = get_float("Enter cost of the item: ");
    if (userItemPrice < 100) {
        rate = 0.05; // Rate of 5%
        taxTotal = userItemPrice * rate;
        total = userItemPrice + taxTotal;
        printf("Your final price is: %.2f\n", total);
        printf("A Tax of $%.2f", taxTotal);
        printf(" was added, The Rate of the tax is: 5%% = %.2f\n", rate);        
    } else {
        rate = 0.1; // Rate of 10%
        taxTotal = userItemPrice * rate;
        total = userItemPrice + taxTotal;
        printf("Your final price is: $%.2f\n", total);
        printf("A Tax of $%.2f", taxTotal);
        printf(" was added, The Rate of the tax is: 10%% = %.2f\n", rate);
    }

}