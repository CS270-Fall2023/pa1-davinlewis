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
    char str[50];
    scanf("%[^\n]s",str);
    char **arrayOfTokens;
    int numberOfTokens;
    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("Number of Tokens: %d\n", numberOfTokens);
    for(int i = 0; i < numberOfTokens; i++)
    {
        printf("%s\n", (arrayOfTokens)[i]);
    }
    return 0;
}