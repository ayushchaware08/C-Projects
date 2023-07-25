// DATE 15/01/2023
//Exercise 5
//Araay reversal: reverse array {1,2,3,4,5,6,7}
//output {7,6,5,4,3,2,1}
// steps
// 7,2,3,4,5,6,1   swap 7 and 1
// 7,6,3,4,5,2,1   swap 6 and 2
// 7,6,5,4,3,2,1   swap 5 and 3
#include<stdio.h>

void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        //swap item i with item (6-i)
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;

    }
    
    
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d id %d\n",i,arr[i]);
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("Before reversing the array\n");
    arrayprint(arr);
    arrayrev(arr);
    printf("After reversinf the array");
    arrayprint(arr);

    return 0;
}
