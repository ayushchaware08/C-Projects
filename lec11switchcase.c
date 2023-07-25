#include <stdio.h>
int main()
{
     int age, marks;
     printf("Enter your age\n");
     scanf("%d", &age);

     printf("Enter your marks\n");
     scanf("%d", &marks);

     switch (age)
     {
     case 3:
          printf("your age is 3\n");
          // if you write break here it will not go further to switch or any other case. it directly goes after}
          // break is isn't nesesary, try code without break in each or both of the cases, you get output atillit reach till to break;
          switch (marks)
          {
          case 45:
               printf("your marks is not 45\n");
               break;

          default:
               printf("your marks is not 45\n");
               break;
          }
          // i.e switch ke andar bhi switch dala ja sakta hai
          break;
     case 13:
          printf("your age is 13\n");
          break;

     case 20:
          printf("your age is 20\n");
          break;

     default:
          printf("your age not is 3,13,20\n");
          break;
     }

     return 0;
}
