#include "pa1.h"
#include <stdio.h>

int main()
{
    char **arrayOfTokens, str[] = "ls -l file";
    int numberOfTokens;
    numberOfTokens = getTokens(str, &arrayOfTokens);
    /*printf("Number of tokens: %d", numberOfTokens);
    for(int i = 1; i <= numberOfTokens; i++)
    {
        printf("Token %d: %s", i, arrayOfTokens[i]);
    }*/
    return 0;
}