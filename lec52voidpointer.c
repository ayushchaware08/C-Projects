#include<stdio.h>
int main ()
{
    int a=345;
    float b= 8.3;
    void *ptr;
    ptr = &a;
    /*derefrencing ptr but its not possible as it is void pointer 
    and we can't derefrence void pointer But if we use 
    *(int *)prt then bhaiaisa hai tu jo hahele void pointer the 
    but tum an int pointer (type casting) so it can easily typecasted.*/
    printf("The value of a is %d\n",*(  (int *)ptr));
    ptr=&b;
    printf("The value of b is %0.2f\n",*((float *)ptr));
    return 0;
    // so here we stored various type of address in same pointer. 
}