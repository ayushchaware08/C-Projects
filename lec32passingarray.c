#include <stdio.h>
int funcl(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, array[i]);
    }
    array[0] = 382; // very important point that if you change any value of the array it gets reflected in main function
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

void func3(int arr[2][2])
{
    for(int i=0; i<2;i++)
  
      for (int j = 0; j < 2; j++)
        {
            printf("The value of %d, %d is %d\n", i, j, arr[i][j]);
        }
}

int main()
{
    // int arr[][2] = {{3, 2}, {31, 32}};  //((for func 3))
    int arr[][2] = {3, 2, 31, 32};     //((for finc, func1))
    // // function for funl functiob
    // printf("The value at index 0 is %d\n", arr[0]);
    // funcl(arr);
    // printf("The value of index 0 is %d\n", arr[0]);
    // function for func2 function
    func2(arr);
    func2(arr);
    // //function for func3
    // func3(arr);
    return 0;
}