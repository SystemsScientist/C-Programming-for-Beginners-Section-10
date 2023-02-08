/*
    Author: Matt Johnson
    Subject: character strings
    Purpose: program tests char array methods
    Date: 02/08/2023

    Instructions:

        1. program counts the number of characters in a string (length)
            - cannot use the strlen library function
            - function should take a character array as a parameter
            - should return an int (the length)
        2. program concatenates two character strings
            - cannot use the strcat library function
            - function should take 3 parameters
                + char result[]
                + const char str1[]
                + const char str2[]
                + can return void
        3. program determines if two strings are equal
            - cannot use strcmp library function
            - function should take two const char arrays as parameters
              and return a boolean of true if they are equal and false
              otherwise
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_string_length(const char string[]);
void concat_strings(char result[], const char str1[], const char str2[]);
bool check_string_equality(const char s1[], const char s2[]);

int main(void) {

    // find the length of strings
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "software";

    printf("The length of word1 is: %d\n", find_string_length(word1));
    printf("The length of word2 is: %d\n", find_string_length(word2));
    printf("The length of word3 is: %d\n", find_string_length(word3));

    // concat two strings
    char result[50];

    concat_strings(result, word1, word2);
    printf("\nThe concat of word1 and word2 is: %s\n", result);

    // check equality of strings
    bool bool_result1 = check_string_equality(word1, word2); // returns false
    printf("\nThe two strings are: %d", bool_result1);

    bool bool_result2 = check_string_equality(word3, word3); // returns true
    printf("\nThe two strings are: %d\n", bool_result2);

    return 0;
}

int find_string_length(const char string[]) {

    int count = 0;

    while (string[count] != '\0')
        ++count;

    return count;
}

void concat_strings(char result[], const char str1[], const char str2[]) {

    int i, j;

    for (i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];

    for (j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    result[i + j] = '\0';
}

bool check_string_equality(const char s1[], const char s2[]) {

    int i = 0;
    bool is_equals = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        is_equals = true;
    else
        is_equals = false;

    return is_equals;
}
