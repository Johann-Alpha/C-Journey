// This program builds a Floyd's triangle. Each row is a consecutive integer. It is a right triangle.
// This is my solution to exercise 3.34 from Deitel and Deitel's C How to Program, 9th edition global edition.

#include<stdio.h>

int main(void) {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while(j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}
