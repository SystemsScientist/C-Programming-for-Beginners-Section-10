/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program finds, copies, concatenates, and compares strings
    Date: 02/07/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // finds string length
    char my_string[] = "My name is Jason";  // initialize string

    int length_of_my_string = strlen(my_string); // addresses data type warning
    printf("The length of my_string is: %d\n", length_of_my_string);

    // copies string to a destination
    char temp[50];

    strncpy(temp, my_string, sizeof(temp) - 1); // sizeof(temp) - 1 addresses buffer overflow
    printf("The copied string is: %s\n", temp);

    // concatenates two strings
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination ");

    strncat(dest, src, 15);
    printf("Final destination string: |%s|\n", dest);

    // compare two strings
    printf("strcmp(\"A\", \"A\") is %d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is %d\n", strcmp("A", "B"));
    printf("strcmp(\"B\", \"A\") is %d\n", strcmp("B", "A"));
    printf("strcmp(\"C\", \"A\") is %d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"a\") is %d\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is %d\n", strcmp("apples", "apple"));
    printf("strcmp(\"apples\", \"oranges\") is %d\n", strcmp("apples", "oranges"));

    return 0;
}
