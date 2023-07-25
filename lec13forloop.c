#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=5, j=1 ; i<5, j<10 ; i++, j++)
         /*(exp1,exp2,exp3) here exp1 can be optional but but then define value od i and\or j
           in exp2 statement written last is condition whis is executed
          eg. (; i<5, j<2) therefore, till j<2 is executed if (; j<2,i<5;) then i<5 is executed and rest is statement 
         */
    {
     printf("%d %d\n", i ,j);
    }
    return 0;
}
