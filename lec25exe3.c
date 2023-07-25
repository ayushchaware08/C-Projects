grom GFG
#include<stdio.h>
int fib(int n)
{
    if(n<=1)
       return n;
    return fib(n-1)+fib(n-2);
}
int main()
    {
    int n=9;
    printf("%d",fib(n));
    getchar();
    returm 0;
    }

//By Code with Harry
// fib_recursive(int n);
// if (n==1 or n==2);
// {
// return n;
// }
// else:
// return fib_recursivr(n-1)+fib_recursive(n-2);


// // by using RECURSIVE
// // fib_recursive(int n):   
// //     if n==1 or n==2
// //         return 0;

// //     else:
// //         return fib_recursive(n-1)+fib_recursive(n-2);






// // by using INTERATIVE FUNCTION
// #include<stdio.h>
// int main
// {
//     int f1=0;
//     int f2=1;
//     for (int f1 = 0; f1 < 40; f1++)
//     {
//         printf(%d, f1+f2);
//     }   
//     return 0;
// }