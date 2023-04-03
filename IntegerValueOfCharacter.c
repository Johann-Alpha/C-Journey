// This is my solution to exercise 2.25 from the book C How to Program, 9th ed, global edition by Deitel & Deitel

#include <stdio.h>

int main(void) {
    printf("Enter a character to know the equivalent ASCII number: ");

    char character;
    scanf("%c", &character);

    printf("Your character is %c and the equivalent code is %d\n", character, character);
}

// To compile these exercises on Linux using gcc, we have to use the following command:
// gcc -std=c18 name-of-program -o name-of-program-without-file-extension
// Ex: gcc -std=c18 IntegerValueOfCharacter.c -o IntegerValueOfCharacter

// to run the program: ./name-of-program-without-file-extension
// Ex: ./IntegerValueOfCharacter
