// Sajid loves super heroes he used to imagine himself to be a hero.One day his teacher was taking a class 
// about shapes and asked the students to find the Area of the triangle using Heron's formula Sajid misheard 
// this as Hero's formula and was curious to discover the Hero's formula for finding the area of 
// the triangle.Help Sajid to solve his math problem by using the correct logic in your code

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    scanf("%d %d %d",&a,&b,&c);
    s    = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",area);
    return 0;
}