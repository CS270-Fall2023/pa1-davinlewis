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
    //allocates space for one token in *args
    *args = malloc(sizeof(char**)); 
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
            if(current > 0)
            {
                //resizes *args to fit more tokens
                *args = realloc(*args, (sizeof(char**))*(current+1));
            }
            //allocates space and puts token into array
            end = i;
            tokenSize = end - start;
            (*args)[current] = malloc(sizeof(char) * tokenSize);
            strncpy((*args)[current], s+start, tokenSize);
            start = end+1; 
            numtoken++;
            current++;
        }
    }
    (*args)[current] = malloc(sizeof(char));
    numtoken++;
    (*args)[current] = NULL;
    return numtoken;
}