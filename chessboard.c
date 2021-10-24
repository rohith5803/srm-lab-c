// Elavenil has a chessboard with N rows and M columns. In one step, he can choose two cells of the chessboard 
// which share a common edge (that has not been cut yet) and cut this edge.Formally, the chessboard is 
// split into two or more pieces if it is possible to partition its cells into two non-empty subsets S1 
// and $2 (S1nS2-0, |S1|+1S21-NM) such that there is no pair of cells c1, c2 (c1eS1,c2ES2] which share a 
// common edge that has not been cut.Elavenil does not want the board to split into two or more pieces. 
// Compute the maximum number of steps he can perform while satisfying this condition:

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    n=(m-1)*(n-1);
    printf("%d",n);
    return 0;}