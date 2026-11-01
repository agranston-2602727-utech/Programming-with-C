#include <cs50.h>
#include <stdio.h>

int main (void) {
    int item = 500;
    int total = 0;
    char userOption;
    do {
        printf("Current order: %i\n", total);
        userOption = get_char("Do you want another Item Y/N ?: ");
        if (userOption == 'Y') {
            total = total + item;
        } else {
            continue;
        }
    } while (userOption != 'N');
    printf("Total: %i\n",total);
}