#include <stdio.h>

void bDay(int* age);

int main () {
    int age = 25;
    int *pAge = &age;
    printf("%p \n", &age); // & - Address of Operator 
    // In other words say it's the address of the variable age
    // printf("%p \n", pAge);
    bDay(pAge);
    printf("You are %d years old\n", age);

    return 0;
}

void bDay(int* age) {
    (*age)++;
}

//In Functions arguments functions creates a copy of a value for example the variable of (age).
//If I need to change the value of a variable I need to pass the reference of the variable in a function