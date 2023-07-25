//WILD pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a =45;
    int *ptr; // this is a void pointer.
    // *ptr =34; // this is not a good thing to do
    ptr =&a; // ptr is no longer a wild pointer.
    printf("the value of a is %d",*ptr);
    return 0;
}