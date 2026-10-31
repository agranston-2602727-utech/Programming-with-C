#include <cs50.h>
#include <stdio.h>

int main () {
    char userChoice = get_char("Enter 'W' for Withdrawal or 'B' for Balance Check: \n");
    float accountBal = get_float("Enter your Account Balance: ");
    float accountWithdrawal = get_float("Enter your Withdrawal Ammount: ");
    
    if (userChoice == 'W'){
        if (accountBal >= accountWithdrawal) {
            float newBal = accountBal - accountWithdrawal;
            printf("A Withdrawal request of %.2f", accountWithdrawal);
            printf(" is approved\n");
            printf("Your updated bank balance is now %.2f \n", newBal);
        } else {
            printf("ERROR!! (Insufficient Account Balance) A Withdrawal request of %.2f", accountWithdrawal);
            printf("is Denied\n");
            printf("Your Account Balance is %.2f\n", accountBal);
        }
        
    } else if (userChoice == 'B') {
        printf("Your account balance is: %.2f", accountBal);
    } else {
        printf("Invaild Entry Recompile to try again.");
    }

}