#include <cs50.h>
#include <stdio.h>


int main () {
    int num;
    num = get_int("Enter a number: ");
    if (num % 2 == 0) {
        printf("The Number is even\n");
    } else if (num % 5 == 0) {
        printf("This Number is odd and Divisible by 5\n");
    } else {
        printf("The Number is odd\n");
    }

    return 0;
}