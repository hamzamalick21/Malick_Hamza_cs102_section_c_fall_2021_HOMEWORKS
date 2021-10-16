#include <stdio.h>
int main()
{
  int change ,quarter, dime, nickel, penny;
  printf("Enter Amount of Change in Cents: ");
  scanf("%d", &change);
  quarter = change/25;
  dime = (change - 25 * quarter)/10;
  nickel = (change - 25 * quarter - 10 * dime)/5;
  penny = (change - 25 * quarter - 10 * dime - 5 * nickel)/1;
  printf("Change Conversion: %d Quarters, %d Dimes, %d Nickles, and %d Pennies", quarter, dime, nickel, penny);
  return 0;
}
