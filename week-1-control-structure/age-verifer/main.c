#include <cs50.h>
#include <stdio.h>

int main () {
    string userName = get_string("Enter your name: ");
    int userAge = get_int("Enter your age: ");
    if (userAge >= 18) {
        printf("Hello, %s", userName); 
        printf(" access Granted\n");
        
    } else {
        printf("Sorry, %s", userName); 
        printf(" access Denied\n");
    } 
}