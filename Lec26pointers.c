#include <stdio.h>
int main()
{
    printf("Today am going to practice Pointers\n\n");

    int a = 76;
    int *ptra = &a; // '*' means it is a pointer
    int *ptr2 = NULL; // NULL means pointer that is not assigned
    printf("1The value of a is %d\n", a); 
    printf("2The adress of pointer to a is %p\n", *ptra); //%p is fs used to print pointer via priintf
    printf("3The adress of pointer to a is %p\n", a);                 //& means adress of
    printf("3The value of a is %x\n", ptra);              //%x is format specefier for number in hexadecimal (base 16) values.
    printf("4The value of a is %p\n", &ptra);
    printf("5The value of a is %d\n", *ptra);
    printf("6The value of a is %d\n\n", &ptra);
    //Null pointer
    printf("6The value of a is %p\n", ptr2);
    return 0;
}
