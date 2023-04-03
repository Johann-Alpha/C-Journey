// The following program takes the total collections for a month and calculate the sales tax for the county and the state.
// This is my solution to exercise 3.16 from Deitel and Deitel's C How to program, 9th edition, global edition.

// Pseudocode and top-down, stepwise refinement:

/*
    Initialise variable amount
    set constant County and State.
    while amount != -1
        Prompt user for amount
        store variable
        Initialise variable month
        Prompt user for month
        Calculate County Sales Tax
        Print County Sales Tax
        Calculate State Sales Tax
        Print State Sales Tax
        Sum both taxes
        Print Total Collections
        Print Sales (Collections - Taxes)
        Print County Sales Tax
        Print State Sales Tax
        Print Total Sales Tax Collected
    
*/ 

// Code

#include<stdio.h>

int main(void) {
    double amount;
    double CountyTax = (double) 5/100; // 5%
    double StateTax = (double) 4/100; // 4%

    printf("%s", "Enter total amount collected (-1 to quit): ");
    scanf("%lf", &amount);
    while (amount != -1) {

        double CountySalesTax = (double) amount * CountyTax;
        double StateSalesTax = (double) amount * StateTax;

        printf("Total Collections: $%.2f\n", amount);
        printf("Sales: $%.2f\n", amount - CountySalesTax - StateSalesTax);
        printf("County Sales Tax: $%.2f\n", CountySalesTax);
        printf("State Sales Tax: $%.2f\n", StateSalesTax);
        printf("Total Sales Tax Collected: $%.2f\n", StateSalesTax + CountySalesTax);
        

        printf("%s", "Enter total amount collected (-1 to quit): ");
        scanf("%lf", &amount);
        printf("\n\n");
    }

// The example output in the book does not correspond to the correct percentages. 

}
