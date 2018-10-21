/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			<Conditional Arithmetic>
 * Author:			<Benjamin Besic>
 * ----------------------------------------------------------
 * Description:
 * < You choose between Add or Multiply and then you choose
 *  a number. You go through every number between 1-chosen number
 * If the number is a multiple of 3 or 5 you add/multiply it
 * with each other.>
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include "conditionalarithmetic.h"
#include <float.h>

int main(int argc, char const *argv[]) {

  int choice;
  double num,result=1;
  int isValid=-1;
do
{
  printf("Select Add (1) or Multiply (2): ");
  scanf("%d",&choice);

  switch (choice)
   {
    case 1:
    isValid=1;
    GetNumber(&num);
    for(int i=1;i<=num;i++)
    {
      if((i%5==0)||(i%3==0))
      {
        result=result+i;
      }
    }
    printf("The result is: %lf\n",result-1);
    break;
    case 2:
    isValid=1;
    GetNumber(&num);
    for(int i=1;i<=num;i++)
    {
      if((i%5==0)||(i%3==0))
      {
        result=result*i;
      }
    }
    if(result==1){result=0;}
    if(CheckOverFlow(num)==-1)
    {
      printf("The result is: %lf\n",result);
    }
    else{printf("OVERFLOW!\n");}
    break;
    default:
      isValid=-1;
      break;
    }
  }while(isValid==-1);

  return 0;
}

void GetNumber(double* n)
{
  int isValid=-1;

  while(isValid==-1)
  {
    printf("Select a number in the range (1-100): ");
    scanf("%lf",n);
    if(*n>100||*n<1)
    {
        isValid=-1;
    }
    else{isValid=1;}
  }

}

int CheckOverFlow(double x)
{
  int y=DBL_MAX;

  for(int i=x;i>=1;i--)
  {
    if((i%5==0)||(i%3==0))
    {
      if(i!=3)
      {
        y=y/i;
      }
    }
  }

  if(y>3.0){return -1; }
  else{return 1;}
}
