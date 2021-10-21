// Tina's trainer have given her two positive integers U and V. Now her task is fi find the 
// number of pairs of positive integers (X,Y) such that 1<x<U, 1sYSV and X+Y is even.
// Tina is finding difficult to understand the problem.
// Can you help her solving the problem?

#include <stdio.h>
int main()
{ int U,V;
int sum;
scanf("%d  %d",&U,&V);
sum=U*V/2+((U%2)*(V%2)); 
 printf("%d",sum);
 return 0;
}