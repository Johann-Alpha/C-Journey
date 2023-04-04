// In this program the user will input the principal, the rate, and the days.The program will calculate the interest charge.
// This is my solution to exercise 3.19 from Deitel and Deitel's C How to Program, 9th edition, global edition.

// Pseudocode:
/*
    Prompt user to input principal
    Store principal
    while principal != -1
        Prompt user to input interest rate
        Store interest rate
        Prompt user to enter the loan in days
        store loan
        Calculate the interest charge
            interest = principal * rateee * days / 365
        print interest charge
        prompt user to input principal
        store principal
*/

#include<stdio.h>

int main(void) {
    printf("Enter loan principal (-1 to end): ");
    double loan;
    scanf("%lf", &loan);
    while (loan != -1) {
        printf("Enter interest rate: ");
        double rate;
        scanf("%lf", &rate);
        printf("Enter term of the loan in days: ");
        double days;
        scanf("%lf", &days);
        double interest = (double) loan * rate * days / 365;
        printf("The interest charge is: $%.2f\n\n", interest);
        printf("Enter loan principal (-1 to end): ");
        double loan;
        scanf("%lf", &loan);

        printf("/n/n");
    }
}
