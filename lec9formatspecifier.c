#include<stdio.h>
// statemet in hash does not contain ; .
#define PI 3.14
//#define procesor ((type1/2 to define constant)
int main()
{
    int a=2;
    const float b=7.33;//its const keword type2/2 to define constant. that means value of b is fixed now
                       // futher we cant writre b= any value it will show error as b=7.33 is constant everywhere in this code
    printf("%0.2f\n", PI);

    //Escape sequence 
    printf("%d\n", a);   //new line
    printf("%d\t", a);   //new tab
    printf("%d\0\n", a); //null
    printf("%d\a", a);   //alarm

    /*%f is a format specifier for float if we write it as %2.3f this means 2 charecter and 3 deciml places*/
    printf("addition is%f\n",a-b);
    printf("addition is%0.5f\n",a-b);
    printf("addition is%10.5fbackward space\n",a-b);
    printf("addition is%-10.5f forword space\n",a-b);
    printf("answer is %f\n",b);

    return 0;
}
