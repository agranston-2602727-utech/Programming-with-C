#include <cs50.h>
#include <stdio.h>

int main () {
    int count = 0;
    int total = 0;
    int exit, marks;

    do {
        marks = get_int("Enter student marks: ");
        if (marks >= 0 && marks <= 100) {
            total = total + marks;
            count ++;
        } else {
                printf ("Invaild Input try again");
            }
        exit = get_int("Enter '-1' to exit program or enter '0' to continue: ");
        if (exit == -1) {
            break;
        } 
        if (exit == 0) {
            continue;
        } 
    } while (exit != 0);    
    printf("Number of Vaild Marks Entered: %i\n",  count);
    printf("Average marks: %i\n", (marks / count));
}