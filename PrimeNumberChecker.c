//This program checks if a number is prime or not.
// This is my solution to exercise 3.22 of Deitel and Deitel's C How to program, 9th edition, global edition.

#include<stdio.h>
#include<stdbool.h>

int main(void) {
    printf("Please enter an integer to know if it's prime: ");
    int prime;
    scanf("%d", &prime);

    int i = 2;
    bool isPrime = true;
  
    while (i < prime) {
        if (prime % i == 0) {
            isPrime = false;
        }
        i++;
    }

    if (isPrime) {
        printf("Number %d is prime\n", prime);
    }
    else {
        printf("Number %d is not prime.\n", prime);
    }
}
