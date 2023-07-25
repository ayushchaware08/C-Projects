#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while (index < num)
    {
        printf("%d\n", index + 1);
        index = index + 1;
    }
    return 0;
}

