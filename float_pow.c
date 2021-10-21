// Sathya is an mathematical expert training youngsters struggling in maths to make them better. Sathya 
// usually gives interesting problems to the youngsters to make them love the math.One such day Sathya
// provided the youngsters the base number and exponent and asked the power of that given number Youngsters
//  were lacking the idea to solve the problem Being a exciting youngster com you solve it?

#include<stdio.h>
#include<math.h>
int main(){
    double base,exp,opt;
    scanf("%lf",&base);
    scanf("%lf",&exp);
    opt = pow(base,exp);
    printf("%0.2lf",opt);
    return 0;
}