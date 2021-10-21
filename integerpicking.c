// Swathy and Nancy were selected for Spacey programme which was about to take place 
// the next year in their interview they were struck with the question.The question is that if 
// the floating number is given they have to create a code to display the rightmost integer from the 
// integer part of the number.If they have the logic for the code they will be the part of the digital 
// meter designing for the Spacey Mars launch which was their dream.Can you help them with a logic of 
// the code for the criteria given to them?

#include<stdio.h>
int main(){ 
float spacenum; 
int x; 
scanf("%f",&spacenum); 
x=(int)spacenum; 
printf("%d",x%10); 
return 0; 
} 