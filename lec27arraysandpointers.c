#include<stdio.h>
int main()
{
    // char a='3';
    // char* ptra =&a;
    // printf("%d\n",ptra);    //output us 6422299
    // ptra++;                 //same output as ptra +1
    // ptra--;                 // same outut as ptra-1
    // printf("%d\n",ptra+2);  //output is 6422301 now as character size is 1byte so added 1 here
    // printf("%x\n",ptra+2);  //%x for hexadecimal
    // printf("%p\n",ptra+2);  //%p for pointer

    int arr[]={1,2,3,4,5,6,7};
    printf("the value at position 0 of the array is %d\n",arr[0]);
    printf("the value at position 1 of the array is %d\n",arr[1]);
    printf("the value at position 2 of the array is %d\n",arr[2]);
    printf("the value at position 3 of the array is %d\n",arr[3]);
    printf("the value at position 4 of the array is %d\n",arr[4]);
    printf("the value at position 5 of the array is %d\n",arr[5]);
    printf("the value at position 6 of the array is %d\n",arr[6]);

    printf("Thr adress of first element of the array is %d\n",&arr[0]);
    printf("Thr adress of first element of the array is %d\n",arr);      // same output as arr[0]

    printf("Thr adress of second element of the array is %d\n",&arr[1]);      
    printf("Thr adress of second element of the array is %d\n",arr+1);      // same output as arr[1]

    printf("Thr adress of third element of the array is %d\n",&arr[2]);      
    printf("Thr adress of third element of the array is %d\n",arr+2);      // same output as arr[2]

    printf("Thr adress of fourth element of the array is %d\n",&arr[3]);      
    printf("Thr adress of fourth element of the array is %d\n",arr+3);      // same output as arr[3]

    printf("the value at adress fourthelement of the array is %d\n",*(&arr[3]));
    printf("the value at adress fourth element of the array is %d\n",*(arr+3));      // same output as above
    printf("the value at adress fifth element of the array is %d\n",*(&arr[4]));
    printf("the value at adress fifth element of the array is %d\n",*(arr+4));      // same output as above



    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int a=34;   //any value
//     int* ptra = &a;
//     printf("%d\n",ptra);   // output is 6422296
//     printf("%d",ptra+1);   // output is 6422300 why?? it must be 34+1=35 no, as +1 in pointers depects the size of the integer i.e 4 
//     return 0;             // therefore for +2 it will add 8
//                           // because yaha int function declare kiya hai
// }