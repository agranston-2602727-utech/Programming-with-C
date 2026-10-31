#include <cs50.h>
#include <stdio.h>

int main () {
    float userUnits;
    float unitCost;
    userUnits = get_float("Enter units consumed: ");

    if (userUnits == 100 ) {
        unitCost = userUnits * 0.50;
        printf("Your bill is: %.2f\n", unitCost);
    } else if (userUnits > 100) {
        unitCost = userUnits * 0.75;
        printf("Your bills is: %.2f\n", unitCost);
    } else if (userUnits > 200) {
        unitCost = userUnits * 1;
        printf("Your bills is: %.2f\n", unitCost);
    } else {
        printf("Invaild Input, Compile to try again. \n");
    }
}