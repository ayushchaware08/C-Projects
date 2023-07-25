// use of CALLOC
#include <stdio.h>
#include <stdlib.h> //stdlib library, galloc malloc reloc free are definrd in stdlib only
int main()
{
    int *ptr;
    int n;
    //use of CALLOC
    printf("Enter the size  of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 1; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("the value at %d of this array is %d\n", i, ptr[i]);
    }

    // use of malloc
    int *ptr;
    int n;
    printf("Enter the size  of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 1; i < n; i++)
    {
        printf("the value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}

// use of MALLOC
// #include <stdio.h>
// #include <stdlib.h> //stdlib library, galloc malloc reloc free are definrd in stdlib only
// int main()
// {
//     int *ptr;
//     int n;
//     printf("Enter the size  of array you want to create\n");
//     scanf("%d", &n);
//     ptr = (int *)malloc(10 * sizeof(int));
//     for (int i = 1; i < n; i++)
//     {
//         printf("Enter the value no %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         printf("the value at %d of this array is %d\n", i, ptr[i]);
//     }
//     return 0;
// }