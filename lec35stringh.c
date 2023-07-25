#include<string.h> //new library in c
#include<stdio.h>


int main()
{
    char s1[]="chaware";
    char s2[]="Ayush";
    char s3[54];
    //use of strcat()
    printf(" use of strcat() is to combine two strings %c\n",strcat(s1,s2));
    // use of strlen()
    printf("use of strlen() is to measure length of strings s1 %d\n",strlen(s1));
    printf("use of strlen() is to measure length of strings s2 %d\n",strlen(s2));
    // use of strrev()
    printf("use of strrev() is to reverse string s1\n");
    puts(strrev(s1));
    printf("use of strrev() is to reverse string s2\n");
    puts(strrev(s2));
    //use of strcpy() it copies one string into other
    // strcpy(s3), strcat(s1,s;
    // puts(s3);


    return 0;
}