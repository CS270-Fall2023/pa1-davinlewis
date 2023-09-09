/**
 * @file   pa1.c
 * @author Davin Lewis
 * @brief  Functions for cs270 pa1
 * @date   09/09/2023
 *
 */

#include "pa1.h"

int getTokens(char *s, char ***args)
{
    int start=0, end=0, tokenSize=0, numtoken=0, current =0;
    char temp[20];
    for(int i=0; i < strlen(s); i++)
    {
        if(s[start] == ' ')
        {
            start = i;
        }
        else if(s[i] == ' '|| i+1 == strlen(s))
        {
            if (i+1 == strlen(s))
            {
                end = i+1;
            }
            else
            {
                end = i;
            }
            tokenSize = end - start;
            (*args)[current] = malloc(tokenSize);
            strncpy((*args)[current], s+start, tokenSize);
            start = end+1; 
            numtoken++;
            current++;
        }
    }
    return numtoken;
}