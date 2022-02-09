/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1 , mark2 , average ; //variable declaration


  printf("Enter the mark 1 : ");
  scanf("%f" , &mark1);         
                                  //getting inputs
  printf("Enter the mark 2 : ");
  scanf("%f" , &mark2);

  average = (mark1+mark2)/2 ;

  printf("average = %.2f" , average);    //printing the output
  
  return 0;
}

