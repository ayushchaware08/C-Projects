
// how also we can write
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);
    printf("multiplication table of %d is  as follows:\n", num);
    for ( int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num,i, num*i);
    }
    //for loop has three experation. lopps continues till it satiffy all three equations

    //alternate way to write code
    //printf("%d X 1 = %d\n",num, num*1);
    //printf("%d X 2 = %d\n",num, num*2);
    //printf("%d X 3 = %d\n",num, num*3);
    //printf("%d X 4 = %d\n",num, num*4);
    //printf("%d X 5 = %d\n",num, num*5);
    //printf("%d X 6 = %d\n",num, num*6);
    //printf("%d X 7 = %d\n",num, num*7);
    //printf("%d X 8 = %d\n",num, num*8);
    //printf("%d X 9 = %d\n",num, num*9);
    //printf("%d X 10 = %d\n",num, num*10);


    return 0;
}


/* how i write first easy
#include <stdio.h>
int main()
{
    int a;
    a=6;
    printf("6*1=%d\n",a*1);
    printf("6*2=%d\n",a*2); 
    printf("6*3=%d\n",a*3);
    printf("6*4=%d\n",a*4);   
    printf("6*5=%d\n",a*5);
    printf("6*6=%d\n",a*6);
    printf("6*7=%d\n",a*7);
    printf("6*8=%d\n",a*8);
    printf("6*9=%d\n",a*9);
    printf("6*10=%d\n",a*10);
    return 0;
}
*/