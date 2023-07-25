#include <stdio.h>
// without argument without retuen value

//without argument with return value 
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("Enter a number \n");
    scanf("%d", &i);
    return i;
}
int main()
{ 
    int a, b, c;
    a = 9;
    b = 10;
    c=takenumber();
    printf("The number enteres is %d \n",c);
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}


// code for with aggument without return value
/*
int sum(int a, int b);
void printstar(int n)        // void is for proccessing not gives return values.
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');   //%c for charecter as we are printing *. "for string" 'for character'
    }
}
int main()
{ 
    int a, b, c;
    a = 9;
    b = 10;
    c = sum(a, b);
    printstar(7);
    //printf("sum is %d \n", c);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
*/

// this is with argument with return value code
/*

int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b);
int main()
{
    int a,b,c;
    a=9;
    b=10;
    c=sum(a,b);
    printf("sum is %d \n",c);
    return 0;
}

*/
/*

int sum(int a, int b)
{
    return a+b;
}                 ((you can call function here also after declaring int sum(a,b,c){return a+b} in start
*/