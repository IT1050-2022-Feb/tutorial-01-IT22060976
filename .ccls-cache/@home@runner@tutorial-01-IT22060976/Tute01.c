/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2, avg;

  printf("Enter marks of Subject 1:");
  scanf("%d", &m1);
  printf("Enter marks of Subject 2:");
  scanf("%d", &m2);
  avg = (m1 + m2) / 2;
  printf("Average of 2 marks:%d", avg);
  return 0;
}
