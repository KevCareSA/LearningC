/*
    looking at string functions
    -strlen() is function that looks at the string length 
    by returning the number of characters in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Just how long am I?"; 
    int len;
    
    len = strlen(string);
    
    printf("The following string:\n");
    puts(string);
    printf("is %d characters long.\n",len);
    
    return(0);
}