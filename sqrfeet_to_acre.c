// Issac loved to do agriculture he worked for a 9-5 job in the week days and dedicated to do agriculture 
// on the week end.He dreamed to combine technology and agriculture together in the future. 
// He started with a small automated automobile that can water the plants when he is not available in 
// the field.He measured his field in square feet but for generalising his project he wished to convert 
// it to acresCan you help him with a code that reads the area of the farmer's field in square feet and 
// display the area in acres?

// Functional Description.

// There are 43,560 square feet in an acre

#include<stdio.h>
int main(){
    float tractLand,tractLandAcred;
    int arce = 43560;
    scanf("%f",&tractLand);
    tractLandAcred = tractLand/arce;
    printf("%0.2f sq.ft is equal to %0.2f acres",tractLand,tractLandAcred);
    return 0;
}