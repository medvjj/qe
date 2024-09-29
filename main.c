#include <stdio.h>
#include <math.h>
#include "functions.h"

int main(void)
{
  double p, q, r, d;
  int n;
  printf("	Enter the coefficients of the quadratic equation (a b c)  separated by a space\n");
  n=scanf("%lf %lf %lf", &p, &q, &r);
  printf("	The final equation is:\n");
  if (q>=0 && r>=0) { 
       printf("	%f*x^2+%f*x+%f=0\n", p, q, r);
  }
  if (q<0 && r>=0) { 
       printf("	%f*x^2%f*x+%f=0\n", p, q, r);
  }
  if (q>=0 && r<0) { 
       printf("	%f*x^2+%f*x%f=0\n", p, q, r);
  }
  if (q<0 && r<0) { 
       printf("	%f*x^2%f*x%f=0\n", p, q, r);
  }
  if (n != 3) {
       printf("	Error: wrong input.\n");
       return 1;
  }
  if (p == 0) {
       printf("	Error: not a qadratic equation!!\n");
       return 2;
  }
  d = discrim(p, q, r);
  if (d < 0) {
       printf("	No roots\n");
       return 0;
  }
  d = sqrt(d);
  printf("	first root  x1=%.5f;\n	second root  x2=%.5f.\n", (-q-d)/(2*p), (-q+d)/(2*p));
  return 0;
}
  
