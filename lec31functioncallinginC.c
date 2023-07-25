// EXAMPLE OF CALL BY REFRENCE

#include <stdio.h>
// function defination to swap the value
// in C programming always start reading from int main() function always
void swap(int *x, int *y) // swap function is declared
{
    int temp;
    temp = *x;       // save the value at address x(read as- temp is value of x)
    *x = *y;         // put y into x (value of x is value of y)(formal parameter)
    *y = temp;       // put temp into y
}
int main()
{
    int a, b;        //(actual parameter)
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : "); // i.e swap address of a & b
    scanf("%d", &b);
    printf("%d , %d\n", a, b);
    swap(&a, &b);
    printf("%d , %d", a, b);
    return 0;
}

// QUICK QUIZ
// given two numbers a and b, add them then substract them to a and b using call by refrence.
//  eg: if a= ,b= them a-b= and then swap value and b-a=

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("you entered %d as a and %d as b\n", a, b);

    printf("diffrence is %d\n", a - b);

    swap(&a, &b);
    printf("Now, after swapping the %d is a and %d is b", a, b);
    printf("diffrence is %d", a - b);
    return 0;
}
