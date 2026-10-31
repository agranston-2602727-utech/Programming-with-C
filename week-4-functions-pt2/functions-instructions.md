# Functions Tutorial & Lab — C and Python

## Part B: Tutorial

Write programs in **C and Python** to answer the following questions.

### 1. Basic Function (No Parameters, No Return Value)

a. Write a function named `printMessage` that prints "Welcome to UTech, the Birthplace of Greatness". Write the `main()` function (or otherwise) that calls `printMessage`.

### 2. Function with Parameters (No Return Value)

a. Write a function named `printSum` that accepts two integers and prints their sum. Modify `main()` (or otherwise) to prompt the user for two numbers and pass them to `printSum`.


a. Write a function named `square` that accepts an integer and returns its square. In `main()` (or otherwise), call the function and display the returned value.

### 4. Multiple Parameters

a. Write a function `calculateArea` that accepts the length and width of a rectangle and returns the area. Display the area in `main()` (or otherwise).

### 5. Decision Making Inside a Function

a. Write a function `isEven` that accepts an integer and returns `1` if the number is even and `0` otherwise. Use the function in `main()` (or otherwise) to display an appropriate message.

### 6. Iteration Inside a Function
a. Write a function `printNumbers` that accepts an integer `n` and prints numbers from 1 to `n`. Call the function from `main()` (or otherwise).

### Challenge Question
Write a function `factorial` that accepts a number and returns its factorial. Ensure the function handles the case where the user enters 0.

---

## In the Laboratory

Complete any unfinished questions from the tutorial section. Implement and execute the following programs using **C and Python**:

1. Write a function that accepts a person's name and prints a greeting message.
2. Write a function that accepts three test scores and returns the average score.
3. Write a function that accepts a student's score and returns `"Pass"` if score ≥ 50, otherwise `"Fail"`.
4. Write a function that accepts hours worked and hourly rate. The rules are:
   - a. Up to 40 hours → normal pay
   - b. More than 40 hours → extra hours paid at 1.5× the rate

   Return the total salary.
5. Write a function that accepts the number of GB used and returns the bill:

   | Usage (GB) | Charge |
   |---|---|
   | Less than or equal to 5 | $2000 |
   | 6 – 10 | $3500 |
   | More than 10 | $5000 |

6. **Simple Payroll System** — Add any necessary input required (e.g. hours worked and hourly rate). Write functions to calculate the employee's gross pay, tax deduction, and net pay. Use these functions together to display an employee payslip.

### Challenge Question

A utility company wants to calculate monthly electricity bills for its customers using a program that is structured with functions. The program must accept the customer name and the number of electricity units consumed for the month. Write the following functions:

1. `calculateEnergyCharge(units)`
   - First 100 units → $4 per unit
   - Next 100 units → $6 per unit
   - Any units above 200 → $8 per unit
   - Return the energy charge