/*Objective:
Develop a C program that acts as a basic calculator for expressions involving two variables (x and y) and two coefficients (a and b), where the operation can be addition or subtraction.

Steps to Implement the Project:

Input Handling:

Prompt the user to enter an expression in the format ax + by or ax - by.
Read and parse this expression to extract the coefficients a and b and the operator (+ or -).
User Input:

Prompt the user to input values for x and y.
Read these values from the user.
Calculation:

Based on the parsed coefficients and operator, compute the result of the expression using the provided values of x and y.
Handle both addition (+) and subtraction (-) operations.
Output:

Display the computed result to the user.
Detailed Steps and Requirements:
Step 1: Input Handling

Prompt the user to enter an expression in the format ax + by or ax - by.
Use scanf to read and parse this expression. Ensure the format string is " %lfx %c %lfy" to handle the input correctly.
Validate the input to ensure it conforms to the expected format (ax + by or ax - by).
Step 2: User Input

Prompt the user to input values for x and y.
Use scanf to read these values as double.
Step 3: Calculation

Based on the operator (+ or -) extracted from the input expression:
Calculate result = ax + by if the operator is +.
Calculate result = ax - by if the operator is -.
Step 4: Output

Print the computed result to the console, formatted to two decimal places for clarity ("Result: %.2f\n").
Requirements:
The program should handle both positive and negative coefficients for x and y.
Error handling: Ensure the program checks for valid input formats and notifies the user if the input format is incorrect.
Use functions if necessary to organize and modularize your code (optional for simplicity at this stage).
Example:
If the user enters 2.5x + 1.8y and provides x = 3.2 and y = 4.5, the program should calculate and output:15.10
*/

#include <stdio.h>
int main()
{
    double a, b, x, y;
    char operator;

    printf("Enter an expression in the format ax + by or ax - by.\n");
    scanf("%lfx %c %lfy", &a, &operator, & b);
    printf("Input values for x and y.\n");
    scanf("%lf %lf", &x, &y);
    // Checking purpose
    // printf("%lf %lf", a, b);
    // printf("%lf %lf", x, y);
    // printf("%c", operator);
    double ax, by;
    ax = a * x;
    by = b * y;
    if (operator== '+')
    {
        /* code */
        printf("The value of %.1lfx * %.1lf %c %.1lfy * %.1lf is:\n%.1lf + %.1lf  i.e.:: %.2lf", a, x, operator, b, y, ax, by, ax + by);
    }
    else if (operator== '-')
    {
        /* code */
        printf("The value of %.1lfx * %.1lf %c %.1lfy * %.1lf is:\n%.1lf- %.1lf i.e.:: %.2lf", a, x, operator, b, y, ax, by, ax - by);
    }
    else
    {
        printf("Error");
    }

    return 0;
}