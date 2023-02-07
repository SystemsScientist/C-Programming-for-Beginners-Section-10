/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program uses tokens parse sentence parts
    Date: 02/07/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // access strtok() function

int main(void) {

    char str[80] = "Hello how are you - my name is - jason";
    const char s[2] = "-";  // delimiter
    char *token;            // pointer

    // get the first token
    token = strtok(str, s);

    // walk through other tokens
    while (token != NULL) {
        printf(" %s\n", token);

        token = strtok(NULL, s);
    }

    return 0;
}
