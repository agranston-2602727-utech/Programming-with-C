#include <cs50.h>   
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char c = get_char("Input: ");
    printf("Output: %c\n", toupper(c));
}