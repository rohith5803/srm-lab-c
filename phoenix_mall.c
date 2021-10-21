// Phoenix mall in the capital city of Washington and it is rectangular in shape when it is seen on the map 
// with the size n x m meters.On the occasion of the jubilee anniversary, a decision was taken to save 
// the Square with square marbles stones.Each stone is of the size nxn.Can you what is the least number of 
// stones needed to pave the Square? It's allowed to cover the surface larger than the Mall Square, 
// but the Square has to be covered.It's not allowed to break the stones. 
// The sides of stones should be side by side(parallel) to the sides of the Square.

#include <stdio.h>
int main()
{
   int n,m,a;
   int stones;
    scanf("%d %d %d",&n,&m,&a);
    stones=((n+a-1)/a)*((m+a-1)/a);
    printf("%d",stones);
    
    return 0;
}