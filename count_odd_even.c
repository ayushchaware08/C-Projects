#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int i = a[0];
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
           printf("%d, ",arr[i]);
        }
    }
    return 0;
}