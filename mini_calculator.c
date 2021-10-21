// To calculate the given  value as add,sub,mult,mod,div
#include<stdio.h>
int main(){
    int testnum1,testnum2;
    int add,sub,mult,mod;
    float div;
    scanf("%d",&testnum1);
    scanf("%d",&testnum2);
    add  = testnum1  +  testnum2;
    sub  = testnum1  -  testnum2;
    mult = testnum1 *  testnum2;
    mod  = testnum1  %  testnum2;
    div=(float)testnum1/(float)testnum2;
    printf("Addition : %d\n",add);        // this is for addition 
    printf("Subtraction : %d\n",sub);     // this is for subtraction
    printf("Multiplication : %d\n",mult); // this is for miltipilcation 
    printf("Division : %0.3f\n",div);     // this is for divison 
    printf("Modulus : %d\n",mod);         // this is for modulus 
    return 0;
}