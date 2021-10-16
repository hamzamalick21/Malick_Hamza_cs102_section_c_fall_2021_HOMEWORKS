# README.md for hw-1 / problem-2

Actual Code:
#include <stdio.h>
int main()
{
  int min;
  printf("Enter Integer Value of Minutes: ");
  scanf("%d", &min);
  printf("Minutes to Hour Conversion: %d hour(s) and %d minute(s) ", min/60, min%60);
  return 0;
}

Algorithm:
Ask for user input
Calculate number of hours by dividing by 60
Calculate remaining minutes with %
Print result

print(input x)
scan(x)
print(conversion, x/60, x%60)

