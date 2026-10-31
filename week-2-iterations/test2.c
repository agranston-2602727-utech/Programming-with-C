// This Program is used to test Hardvard's string.h library on finding the lenth of a string 

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void) {
    string name = get_string("Name: ");
    printf("Output: %s\n", name);
    int n = strlen(name);
    for (int i = 0; i < n; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    printf("The Length of the String: %i", n);
    printf("\n");
}