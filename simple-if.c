#include <stdio.h>

int main() {
    int a = 100;
    int b = 100;
    char x = 'y';
    char y = 'n';

    // check if A is greater than B
    if (a > b) {
        printf("A is greater than B");
        printf("\n");
    }

    // check if B is greater than A
    if (b>a) {
        printf("B is greater than A");
        printf("\n");
    }   
    // check if A is equal to B
    if (a==b){
        printf("A is equal to B");
         printf("\n");
    }

    if ( x > y) {
         printf("X is greater than Y");
        printf("\n");
    }

    return 0;
}