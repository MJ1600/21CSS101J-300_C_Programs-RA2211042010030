#include <stdio.h>

/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
  if (c >= 'A' && c <= 'z')
    return c + 'a' - 'A';
  else
    return c;
}
