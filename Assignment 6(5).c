#include <stdio.h>
void main ()
{
  double a;
  printf ("Enter the no: to be checked: ");
  scanf ("%lf", &a);
  if (a > 0)
    printf ("\nPOSITIVE");
  else if (a < 0)
    printf ("\nNEGATIVE");
  else
    printf ("\nZERO");
}
