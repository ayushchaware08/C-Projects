//  palindrome i.e same if read from left or right
// eg: 754 457 false  84548 84548 true
#include<stdio.h>
#include<stdlib.h>
int ispalindrome(int num)
{
    int reversed =0;
    int orignalnumber =num ;
    // reversec program
    while (num!=0)
    {
      reversed = reversed*10 + num%10;
      num = num/10;
    }
    printf("The reversed no. is %d\n",reversed);
    if (orignalnumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}
int main()
{
    int number;
    printf("Enter the number to check the palindrome or not\n");
    scanf("%d",&number);
    if(ispalindrome(number))
    {
        printf("This number is palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome");
    }
    return 0;
}