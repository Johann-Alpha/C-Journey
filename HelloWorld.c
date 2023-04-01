// This is my first program in C
// A normal hello world program.

#include <stdio.h> // This is the preprocessor directive.

int main(void) {
    printf("Hello world!!\n");

    printf("Adding two numbers and showing the result");

    int integer1 = 0;
    int integer2 = 0;

    printf("Enter first integer\n");
    scanf("%d", &integer1); // Here we're reading the input from user in std input.

    printf("Enter second string\n");
    scanf("%d", &integer2);

    int sum = 0;
    sum = integer1 + integer2;

    printf("The sum of %d and %d is %d\n", integer1, integer2, sum);
}
