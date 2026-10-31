#include <cs50.h>
#include <stdio.h>

int main () {
    int userNum = get_int("Enter a Number: ");
    if (userNum > 0) {
        printf("The number %i", userNum);
        printf(" is a Positive Number (+) \n");
    } else if (userNum == 0) {
        printf("The Number is Zero \n");
    } else {
        printf("The number %i", userNum);
        printf(" is a Negative Number (-) \n");
    }
}