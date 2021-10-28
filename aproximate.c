// Aaray and Nathan who live in the fictional town of Pune, think and do innovatively on weekends. Every 
// day the boys embark on some grand new project, which annoys their controlling sister Thendral, who tries 
// to bust them.One Sunday they were both sitting under a tree in their back yard. They decide to invent 
// the machine which would allow us to enter 2 numbers it would say whether one of the entered numbers is 
// an appropriate value of the other number entered they decide to insert a program code into the machine. 
// A number is said to be an approximate value of the other if they differ by utmost 0.5. Can you help 
// Aaray and Nathan with the programming logic to find whether the given number is an approximate number 
// of other?

#include<stdio.h>
int main()
{
float a,b;
scanf("%f\n %f",&a,&b);
((a-b)<=0.5)?printf("Approximate number"):printf("Not an Approximate number");
return 0;
}
