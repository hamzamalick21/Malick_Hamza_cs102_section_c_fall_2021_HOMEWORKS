#include <stdio.h>
int main ()
{
  float height, width, perimeter;
  printf("Enter Height: ");
  scanf("%f", &height);
  printf("Enter Width: ");
  scanf("%f" , &width);
  perimeter = (2 * height) + (2 * width);
  printf("Perimeter of Rectangle = %f ", perimeter);
  return 0;
}
