#include<stdio.h>
int main()
//code for person eligible to vote
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
   
    if (age>18) 
    { 
     printf("You are eligible to vote.");
    }
    else
    {   
        printf("You are not eligible for vote.");
    }
    return 0;
}
