/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance, amount, amount1, amount2;
  printf("Enter the Distance:");
  scanf("%d", &distance);
  if (distance <= 30) {
    amount = distance * 50;
  } else {
    amount1 = 30 * 50;
    amount2 = (distance - 30) * 40;
    amount = amount1 + amount2;
  }

  printf("Amount to be paid:%d", amount);

  return 0;
}
