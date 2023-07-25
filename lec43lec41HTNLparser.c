/*

EXERCISE

imput:
<h1> This is Heading h1 </h1>
output:
this is heading

input:
<span> This is Heading h2 </span>
output:
this is heading h2

*/
#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // to remove the trailling spaces i.e the blank spaces '
    while (string[0] == ' ')
    {
        // shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    // to remove the trailling space from the end
    while (string[strlen(string) - 1]==' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>     THis is A Heading    </h1>";
    parser(string);
    printf("The parser string is string is  ~~%s~~", string);
    return 0;
}