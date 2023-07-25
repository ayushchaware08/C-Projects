#include<stdio.h>
int func1(int a, int b)
{
    auto int sum;
    sum = a+b;
    return sum;
}
int main()
{
    // Declaration and defination MEaning
    // Declaration Telling the compiler about the variable (NO space reserved)
    // Defination - declare and reserve space (space reservation)
    int sum = func1(3,5);
    printf("the sum is %d\n", sum);
    
    return 0;
}