#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    char fav_marks;
    int marks;
    char name[34];
}std ;
int main()
{
    // int *a, b;   // it will treat int *a and int b i.e a is pointer and b is int
    //so if we  declare int* as typedef int pointer
    typedef int* intpointer;
    intpointer a, b;  // here a and b both were considered as pointer
    int c=89;
    a=&c;
    b=&c;


    // // struct student s1 , s2;          ((insted of))
    // std s1,s2;
    // s1.id = 1;
    // s2.id =55;
    // //tye=pedef <previous name> <alisas mame>

    // s1.marks = 45;
    // s1.fav_marks= 'f';
    // strcpy(s1.name,"Ayush Sanjay Chaware");

    // printf("THe s1 id is %d \n",s1.id);
    // printf("THe s2 id is %d \n",s2.id);
    // printf("THe marks is %d \n",s1.marks);
    // printf("THe fav_marks is %c\n",s1.fav_marks);
    // printf("THe name is %s\n",s1.name);
    // strcpy(s1.name, "Ayush");

    
    return 0;
    
}