// complete use of file I/O
// you have to fill data from template from letter.txt file
// Letter.txt looks like this
// Thanks {{name}} for purchasing {{item}} from out outlet
// Thanks for visiting us. visit again!
// you have to read this file and use it for your program
// replace this by this
// {{name}} = Ayush
// {{item}} = Air conditioner
// {{outlet}} = 5 Star AC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// this is string
char *replaceword(const char *str, const char *oldword, const char *newword) // we make ot const so that it should not change
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    // Lets count the numberof times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // jump over this word
            i = i + oldwordlength - 1;
        }
    }
    // Making a new string to fit in the replace words
    resultstring = (char *)malloc(i + count  * (newwordlength - oldwordlength) + 1);
    i = 0;
    while (*str)
    {
        // compare the Substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt","r");
    ptr2=fopen("genbill.txt","w");
    char str [200];
    fgets(str,200,ptr);
    printf("The given bill template was : %s \n",str);

    //call the replace function and generate newstr
    char * newstr;
    newstr = replaceword(str,"{{item}}","Air Conditioner");
    newstr = replaceword(newstr,"{{outlet}}","5 Star ACs");
    newstr = replaceword(newstr,"{{name}}","Ayush");
    printf("The actual bill generated is : %s\n",newstr);
    printf("The generate bill has been written to the file genbill.txt");

    fprintf(ptr2, "%s",newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}