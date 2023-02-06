/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program prints a truncated string
    Date: 02/06/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // prints "The character" and compiler returns one warning
    printf("\nThe character \0 is used to terminate a string.\n");

    return 0;
}
