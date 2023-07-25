#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[]={'a','y','u','s','h','\0'};
    // char str[60]="Ayush";
    char str[34];
    gets(str);
    printf("Using CUSTOM function printf\n");
    printstr(str);
    printf("using printf %s\n",str);
    printf("using puts \n");
    puts(str);
    return 0;
}