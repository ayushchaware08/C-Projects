#include <stdio.h>
int main()
{
    // To Print it in matrix form
    int marks[2][4]={{4,5,6,7},{4,9,8,5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }



    // FOR 2D ARRAY
    // int marks[2][4] = {{45, 243, 3, 4}, {3, 4, 5, 8}}; // known as declaration and initilizetion for 2D ARRAY, for 1D array int main[4]={5,6,8,1}
    // for (int i = 0; i < 2; i++)                        // i<2 as here 2d contain 2 rows so it will go as 0 1
    // {
    //     for (int j = 0; j < 4; j++) // j<4 as it hs 4 column so it will go as 0 1 2 3
    //     {
    //         printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
    //     }
    // }

    // FOR 1D ARRAY
    //  int main[4];
    //  for (int i = 0; i < 4; i++)
    //  {
    //      printf("Enter the value of %d element of the array\n", i);
    //      scanf("%d", &marks[i]);
    //  }
    //  for (int i = 0; i < 4; i++)
    //  {
    //      printf("The vaue of %d element of the arrey id %d\n", i, marks[i]);
    //  }

    // lenthy stuff can be easily runed using above code
    // int main[4];
    // printf("Marks of student 1 is %d\n",marks[1]);
    // marks[0]=3;
    // marks[1]=5;
    // marks[2]=4;
    // marks[3]=6;
    // printf("Marks of student 2 is %d\n", marks[0]);
    // printf("Marks of student 2 is %d\n", marks[1]);
    // printf("Marks of student 2 is %d\n", marks[2]);
    // printf("Marks of student 2 is %d\n", marks[3]);
    // return 0;
}