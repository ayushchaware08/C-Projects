#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
            // for only func here if you not give curly bracket its okay. but in case of 2 you have to
        scanf("%d", &age);
        if (age > 10)
        {
            break;  //agar 10 se age baddi to vahi code end
        }
    }

    return 0;
}
