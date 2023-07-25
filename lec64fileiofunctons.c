#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL; // first make file as null pointer
    char string[64] = "This content was produced by tutorial64.c";

    // to READ a file
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    // to WRITE a file
    // ptr = fopen("myfile.txt", "w");  //in writing mode
    // fprintf(ptr, "%s", string);   // in write mode purana content erase hokar naya content aayega

    // In Ambient mode
    ptr = fopen("myfile.txt", "a"); // ambient mode just add new text in file and pahele eala data is as it\ is
    fprintf(ptr, "%s", string);
    return 0;
}