#include<stdio.h>
int b=34;
int func1(int b)
{
    static int myvar;
    printf("The  value of myvar is %d \n",myvar);
    myvar++;
    return b * myvar;
}
int main()
{
    int b=344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The adress of b inside main is %d \n", &b);
    // int val = func1(b);
    // int *ptr = &val;
    // printf("The value of func1 is %d", val);
    // printf("The value of func1 is %d",val);
    return 0;
}