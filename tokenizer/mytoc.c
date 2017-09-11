#include <stdlib.h>
#include <stdio.h>
#include "mytoc.h"

char ** mytoc(char *string, char delim)
{

    int length;
    int words=0;

    for(length = 0; string[length] != '\0'; length++);
    printf("Length of string: %d\n", length);



    int i;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == delim && string[i+1] != delim && string[i+1] != '\0')
        {
            words++;
        }
    }
    if(string[0] != delim)
    {
        words++;
    }


    printf("Number of words: %d\n", words);

    char token[length];
    token[words+1] = (char *)malloc(words+1);

    int j;
    for(j = 0; string[j] != '\0'; j++)
    {
        if(string[j] != delim)
        {
            token[j] = string[j];
            //printf("%c",token[j]);
        }
        if(string[i] == delim && string[i+1] != delim && string[i+1] != '\0')
        {
            token[j] = '\0';
            //printf("%c",token[j]);
        }

    }
    token[length+1] = '\0';

    int k;
    for(k = 0; k < length; k++)
    {
        printf("%c", token[k]);
    }
    free(token);
    return token;
}

