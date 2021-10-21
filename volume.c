// We have the value of the radius with that we have to find the volume of the given ball 
#include<stdio.h>
int main(){
    float radiusofball,volumeofball;
    scanf("%f",&radiusofball); // the value of the radius will be stored in the radiusofball
    // the formual to find the volume of the ball is 
    // V = 4/3 πr³
    // pie = 3.14 
    volumeofball = 4.0/3.0*3.14*radiusofball*radiusofball*radiusofball;
    printf("%f",volumeofball);
    return 0;
}