#include <stdio.h>
void main()
{
  int year;
  printf("enter the year \n");
  scanf("%d",&year);
  if((year%4==0)||(year%400==0)&&(year%100==0))
  {
      printf("%d is leap year",year);
  }
  else
  {
      printf("%d is not a leap year",year);
 }
  
}