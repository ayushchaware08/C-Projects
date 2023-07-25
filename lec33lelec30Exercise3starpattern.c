//program for use 0 for Trangular star pattern and 1 for reverse triangular pattern

//print the tringular star pattern
// *
// **
// ***
// ****
// *****
// print in  reversed triangular star pattern
// *****
// ****
// ***
// **
// *

// /*you can also define the code in int main() function also but its your
//  "chaturai" so that you can reuse the function starpattern again in this whole code'*/
#include<stdio.h>
void starpattern(int rows)  
{
    for (int i = 0; i < rows; i++)     //this for loop is for no of rows
    {
        for (int j = 0; j <= i; j++)// this for loop is for no of character(*) in each row
                        // here j<=i try  run this by j<i you will get 1 row less than input value
        {
            printf("*");
        }
         
        printf("\n");
    }
}

// /*you can also define the code in int main() function also but its your
//  "chaturai" so that you can reuse the function starpattern again in this whole code'*/
void reversestarpattern(int rows)  
{

    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j <= rows-i-1; j++)   // yaha row-i ek extra row de raha tha so row-i-1
        {
            printf("*");
        }
         
        printf("\n");
    }
}

int main()
{
    int rows,type;
    // printf("Enter 0 for star pattern \n 1 for Reverse star pattern\n");
    // scanf("%d",&type);
    printf("Enter 0 for star pattern \n 1 for Reverse star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;
    case 1:
        reversestarpattern(rows);
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
