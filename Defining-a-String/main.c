/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program prints strings and counts of strings
    Date: 02/06/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";
    unsigned int count = 0;                     // stores the string length

    while (str1[count] != '\0')                 // increment count until we reach
        ++count;                                // the terminating character

    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    count = 0;                                  // reset count for next string
    while (str2[count] != '\0')                 // count characters in second string
        ++count;

    printf("The length of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}
