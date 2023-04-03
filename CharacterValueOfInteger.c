// The following program will take an integer value and will convert it to its equivalent character.
// This is my answer to exercise 2.26 from Deitel & Deitel's C How to program, 9th edition, global edition.

#include<stdio.h>

int main(void) {
    printf("Please, enter an integer and you'll know the equivalent character: ");
    int integer;
    scanf("%d", &integer);

    printf("The character equivalent to %d is %c\n", integer, integer);

    // To compile these exercises on Linux using gcc, we have to use the following command:
    // gcc -std=c18 name-of-program -o name-of-program-without-file-extension
    // to run the program: ./name-of-program-without-file-extension
}
