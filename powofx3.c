// Flipkart announced the year end stock clearance sale and as apart of they have 
// also conducting the contest and the users answering the questions asked in the contest 
// can win Moto One Power free of cost.The task is to display the first three 
// powers (N^1, N^2, N^3) of the given.Nishanth was looking to buy Moto One Power
// If you help nishanth in solving the task he will get his favorite mobile. Can you help him?

#include<stdio.h>
#include<math.h>
int main(){
    int N,fp,sp,tp;
    scanf("%d",&N);
    fp = pow(N,1);
    sp = pow(N,2);
    tp = pow(N,3);
    printf("%d %d %d",fp,sp,tp);
    return 0;
}

