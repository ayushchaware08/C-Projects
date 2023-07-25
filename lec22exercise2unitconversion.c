//   UNIT CONVERSION
//  where you have to ask user which conversion s/he has to use
/*Km to Miles
  onches to foot
  Cms to inches
  Pound to Kgs
  Inches to Meter
*/

#include<stdio.h>
int main()
{
  char input;
  float kmtomiles = 0.621371;
  float inchestofoot = 0.083333;
  float cmstoinches = 0.393701;
  float poundtokgs = 0.453592;
  float inchestometers = 0.02454;
  float first, second;

  while (1)
  {
    printf("Enter the Input character. 1. Km to Miles\n 2. Inches to foot\n 3. Cms to inches\n 4. Pound to Kgs\n 5. Inches to Meter\n q. to quit\n");
    scanf(" %c", &input);
    //printf("The charactor is'%c'", input);
    switch (input)
    {
    case 'q':
      printf("Quitting the Programm.....");
      goto end;
      break;

    case '1':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f, &first");
      second = first * kmtomiles;
      printf("%f Km is equal to %f Miles\n\n\n", first, second);
      break;

    case '2':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f, &first");
      second = first * inchestofoot;
      printf("%f Inches equal to %f Foot\n", first, second);
      break;

    case '3':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f, &first");
      second = first * cmstoinches;
      printf("%f Cms equal to %f Inches\n", first, second);
      break;

    case '4':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f, &first");
      second = first * poundtokgs;
      printf("%f Pound equal to %f Kgs\n", first, second);
      break;

    case '5':
      printf("Enter the quantity in terms of first unit\n");
      scanf("%f, &first");
      second = first * inchestometers;
      printf("%f Inches equal to %f Meter\n", first, second);
      break;

    default:
      printf("Invalid");
      break;
    }

  }
    end:
  return 0;
}