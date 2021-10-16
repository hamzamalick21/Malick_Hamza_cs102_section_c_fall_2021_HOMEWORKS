#include <stdio.h>
int main()
{
  int min;
  printf("Enter Integer Value of Minutes: ");
  scanf("%d", &min);
  printf("Minutes to Hour Conversion: %d hour(s) and %d minute(s) ", min/60, min%60);
  return 0;
}
