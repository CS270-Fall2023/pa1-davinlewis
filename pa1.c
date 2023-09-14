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
    //temp for holding tokens
    char temp[20];
    for(int i=0; i < strlen(s); i++)
    {
        //won't let string start with a space
        if(s[start] == ' ')
        {
            start = i;
        }
        //sets end to neartest space or end of string
        else if(s[i] == ' '|| i+1 == strlen(s))
        {
            //allocates space and puts token into array
            end = i;
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