// Nathan works as an HR in a private company. He had an opportunity to interview students from various 
// disciplines.He asked the candidates to perform the addition of two floating point numbers given by 
// him an to print the output with three values after decimal point. But the student failed a math test 
// on adding two numbers. So many students could not complete the first round.One day Nathan is invited 
// as a chief placement trainer in a reputed engineering college He willing to know how many students 
// are capable of solving the same problem.Can you solve the problem and prove him that you are capable 
// of solving it


#include<stdio.h>
int main(){
    float var1,var2,res;
    scanf("%f  %f",&var1,&var2);
    res = var1+var2;
    printf("%0.3f",res);
    return 0;
}