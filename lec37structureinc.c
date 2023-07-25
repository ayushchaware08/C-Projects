#include<stdio.h>
#include <string.h>
// declaration of data type "student"
struct student
{
    // structure members
    int id;
    int marks;
    char fav_char;
    char name[24];
};
//struct student ayush, atharav, sourabh;    (( if written here then it become global variable i.e accesible anywhere))
int main()
{
    // use of data type in our code
    struct student ayush, atharav, sourabh;  // (( its wrirtten here as local variable/data type i.e acceced in int main fuction only))

    //initialize a structure
    ayush.id=123;
    atharav.id=234;
    sourabh.id=456;

    ayush.marks=58;
    atharav.marks=54;
    sourabh.marks=55;

    ayush.fav_char='a';
    atharav.fav_char='b';
    sourabh.fav_char='c';

    // QUICK QUIZ print it for all students

    // acessing structure member, marks
    printf("Ayush got %d marks\n",ayush.marks);
    printf("Atharav got %d marks\n",atharav.marks);
    printf("Sourabh got %d marks\n",sourabh.marks);
    //  acessing structure member, ID
    printf("Ayush ID is %d \n",ayush.id);
    printf("Atharav ID is %d\n", atharav.id);
    printf("Sourabh ID is %d\n",sourabh.id);
    //  acessing structure member, character
    printf("Ayush's fav character is %c\n",ayush.fav_char);
    printf("Atharav's fav character is %c\n",atharav.fav_char);
    printf("Sourabh's fav character is %c\n",sourabh.fav_char);
    //  acessing structure member, name
    strcpy(ayush.name,"Ayush Sanjay Chawrare");  //strcpy library in c, used to copy one(" ") string into other (ayush.name)
    printf("AYush full Name is %s\n",ayush.name);
    strcpy(atharav.name,"ATharav Kale");
    printf("Atharav full name is %s\n",atharav.name);
    strcpy(sourabh.name,"Sourabh Dhadade");
    printf("Sourabh full name is %s",sourabh.name);





    return 0;
}