// to write the code for femonacci d=series using both recursive and iterative approach
#include <stdio.h>
int fib_recursive(int n)      //whole code for recursive function
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else

    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
    return 0;
    
}
int fib_iterative(int n)     //whole code for iterative function
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;     //0-1=1
        a=(a-b);   //1-0=1              ibput 44 got output as 433494437 as recursive function

    }
    
    return 0;
}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series \n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative function is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive function is %d\n", number, fib_recursive(number));
    return 0;
}