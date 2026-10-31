#include <cs50.h>
#include <stdio.h>

int main (void) {
    int sales;
    int total = 0;

    for (int i = 1; i < 8; i++) {
       sales = get_int("Enter Sales Day-%i: $", i);
       total = total + sales;
    }
    printf("Total Sales for the week: $%i\n", total);
    printf("\n");
}