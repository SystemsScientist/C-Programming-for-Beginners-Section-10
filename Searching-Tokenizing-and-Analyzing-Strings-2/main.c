/*
    Author: Matt Johnson
    Subject: character strings
    Purpose:
    Date: 02/07/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

    char buffer[100];   // input buffer
    int n_letters = 1;  // number of letters in input
    int n_digits = 0;   // number of digits in input
    int n_punct = 0;    // number of punctuation characters

    printf("Enter an interesting string of less than %d characters: \n", 100);
    scanf("%s", buffer);

    int i = 0;  // buffer index
    while (buffer[i]) {
        if (isalpha(buffer[i]))
            ++n_letters;    // increments letter count
        else if (isdigit(buffer[i]))
            ++n_digits;     // increments digits count
        else if (ispunct(buffer[i]))
            ++n_punct;      // increments punctuation characters
        ++i;
    }

    printf("\nYour string contained %d letters, %d digits, and %d punctuation characters.\n",
            n_letters, n_digits, n_punct);

    return 0;
}
