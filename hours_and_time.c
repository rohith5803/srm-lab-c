// Write a program in C that takes minutes as input, and display the total number of hours and minutes

//int key

// to get the output of hrs and mins we have to divide the total input with 60 m 
// the reminder will be the minutes and the quotient will be the 
#include<stdio.h>
int main(){
    int total_input,mins,hrs;
    const int hours = 60; // we know that 1 hour equal to 60 minutes 
    printf("Enter the input to check the hours and minutes : ");
    scanf("%d",&total_input);
    hrs = (total_input/hours); // division 
    mins = (total_input%hours); // modules 
    printf("%d Hours and %d Minutes \n",hrs,mins);   
    return 0;
}