#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char fav_marks;
    int marks;
    char name[34];
};
int main()
{
    union student s1 ;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_marks= 'f';
    strcpy(s1.name,"Ayush Sanjay Chaware");

    printf("THe id is %d \n",s1.id);
    printf("THe marks is %d \n",s1.marks);
    printf("THe fav_marks is %c\n",s1.fav_marks);
    printf("THe name is %s\n",s1.name);
    strcpy(s1.name, "Ayush");

    
    return 0;
    
}// you will get courrpt answer of id and marks as union at time 1 ko access karega, change the sequence of id marls 
//strcpy is reserverd check other than that