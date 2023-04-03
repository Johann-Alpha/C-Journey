// The following program will take a 4-digit integer and sum its digits.
// This is my answer to exercise 2.27 from Deitel and Deitel's C How to Program, 9th edition, global edition.

#include<stdio.h>

int main(void) {
    printf("Please, enter a 4-digit number ");

    int integer;
    scanf("%d", &integer);

    if (integer > 0) {
        if (integer < 10000) {
            int sum;
            sum = integer % 10;
            sum += integer / 10 % 10;
            sum += integer / 100 % 10;
            sum += integer / 1000;

        printf("The sum of digits in %d is %d\n", integer, sum);
        } 
    }
}




    // To compile these exercises on Linux using gcc, we have to use the following command:
    // gcc -std=c18 name-of-program -o name-of-program-without-file-extension
    // to run the program: ./name-of-program-without-file-extension
