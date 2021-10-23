// Salima saw a pair of beautiful dress online but she was confused about the metric system used for 
// the size of the dress.It was given in feet and inches, even in some countries that primarily use some 
// other metric system.As Salima knows a little bit of programming she thought of creating a program 
// that gets number of feet and inches and compute the height of the customer in centimeters.

#include<stdio.h>
int main(){
    int feet,inches;
    float cms;
    scanf("%d %d",&feet,&inches);
    cms = feet*30.48+inches*2.54;
    printf("Your height in centimeters is : %0.2f",cms);
    return 0;
}