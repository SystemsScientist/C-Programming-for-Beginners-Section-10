/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program uses the most common string functions in the string library
    Date: 02/08/2023

    Instructions:

        1. program displays a string in reverse order
            - should read input from the keyboard
            - need to use the strlen string function
        2. program sorts the strings of an array using a bubble sort
            - need to sue the strcmp and strcpy functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // display string characters in reverse order
    char str[100];
    int l, i;

    printf("\n\nPrint individual characters of string in reverse order.\n");
    printf("-----------------------------------------------------------\n");
    printf("Input the string: \n");
    scanf("%s", str);

    l = strlen(str);

    printf("\nThe characters of the string in reverse are: \n");
    for (i = l; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    printf("-----------------------------------------------------------\n");

    // display strings of an array using a bubble sort
    char name[25][50], temp[25];
    int n, j;

    printf("\n\nSorts the strings of an array using bubble sort. \n");
    printf("-----------------------------------------------------------\n");
    printf("Input number of strings: \n");
    scanf("%d", &n);
    printf("Input string %d: \n", n);

    for (i = 0; i < n; i++)
        scanf("%s", name[i]);

    for (i = 1; i <= n; i++) {
        for (j = 0; j <= n - 1; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
        }
    }

    printf("The strings appear after sorting: \n");
    for (i = 0; i <= n; i++)
        printf("%s", name[i]);

    return 0;
}
