// 2602727
// Bank Account Monthly Balance Calculator
// This program accepts a starting balance, monthly withdrawals,
// and deposits, then calculates the updated balance, total
// monthly transactions, a 1% federal deduction, and final balance.     

#include <stdio.h>
int main () {
    // Delcarations 
    float start_bal, new_bal, total_deposits, total_withdrawals, monthly_trans, fed_tax, final_bal;

    printf("Enter starting Balance: ");
    scanf("%f", &start_bal);   

    printf("\nEnter withdrawals for the month: ");
    scanf("%f", &total_withdrawals);    

    printf("\nEnter deposits for the month: ");
    scanf("%f", &total_deposits);    

    // Calculations
    new_bal = start_bal - total_withdrawals + total_deposits;
    monthly_trans = total_withdrawals + total_deposits;
    fed_tax = monthly_trans * 0.01;
    final_bal = new_bal - fed_tax;

    // Output Messages
    printf("%.2f\nYour monthly transaction is: ",  monthly_trans);
    printf("%.2f, which inlcudes Withdrawal = ", total_withdrawals);
    printf("%.2f and deposits for the month = ", total_deposits);
    printf("%.2f\nYour final balance for the month is: ", final_bal);
    printf("%.2f\nwith a federal deductiuon of 1%%");
}

// Program contains a logical error where calculation for final_bal is incorrect and incorrect display of monthly transaction