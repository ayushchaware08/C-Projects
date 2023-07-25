// #define and #include preprosser directives
#include <stdio.h>
#include "lec58preeprocessorinc.c" // generally it work is to bring the file content and use in this code.
#define PI 3.14
#define SQUARE(r) r*r
int main2() // here we use main2 as we already used main in lec56 file.
{
    int var = PI;
    int r = 3;
    int *ptr = functionDangling();
    printf("This is me %d\n", var);
    return 0;
}