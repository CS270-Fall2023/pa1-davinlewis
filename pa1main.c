/**
 * @file   pa1main.c
 * @author Davin Lewis
 * @brief  Program accepts a string entered by user, parses string, dynamically allocates arrray, and outputs tokens
 * @date   09/09/2023
 *
 */

#include "pa1.h"


int main()
{
    //prompts user for string
    printf("Enter a string: ");
    char str[50];
    //gets user input until they press enter
    fgets(str, 50, stdin);
    char **arrayOfTokens;
    int numberOfTokens;
    //counts number of tokens and places in array
    numberOfTokens = getTokens(str, &arrayOfTokens);
    //ouputs tokens from array
    printf("Number of Tokens: %d\n", numberOfTokens);
    for(int i = 0; i < numberOfTokens; i++)
    {
        printf("Token %i: %s\n", i+1, (arrayOfTokens)[i]);
    }
    return 0;
}