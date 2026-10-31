#include <cs50.h>
#include <stdio.h>

int main (void) {
    int count = 0; 
    double total = 0;
    double userSalary;

    for (int i = 1; i < 41; i++) {
        userSalary = get_double("Enter employee-(%i) salary: ", i);
        // Accumulator for Payroll Addition
        total = total + userSalary; 

        if (userSalary > 80000.00) {
           count ++;
        }
        
    }
    printf("Total Payroll for the week is: $%.2f\n", total);
    printf("Number of Employees who have exceed $80,000.00 for this week: %i\n", count);
    printf("\n");
}