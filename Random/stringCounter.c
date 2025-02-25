#include <stdio.h>

int string_length(char *s)
{
    int counter = 0;

    while(s[counter] != '\0')
    {
        counter++;
    }

return counter;
       

}

int main()
{
    char *string = "hello";

    printf("my string %s is %d long \n", string, string_length(string));

}

