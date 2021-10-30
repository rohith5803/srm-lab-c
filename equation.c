// Arulmozhivarman is working in ship. He is responsible for classifying the ship into different classes 
// based on the letterclass ID of the ship.Since Arulmozhivarman is working on the same task over the 
// long period of time he is bored of doing the same work again and again.He will enjoy his time in the 
// ship if has a automated script that can classify the ships into different classes if the letterclass 
// id of the ship is provided.Can you help Arulmozhivarman?
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double a, b, c, root1, root2, realPart, imagPart;
    int discriminant,cases;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    // if (discriminant>0?cases=1:discriminant<0?cases=-1:discriminant==0?cases=0:-1);
    if(discriminant>0)cases=1;
    if(discriminant<0)cases=-1;
    if(discriminant==0)cases=0;
    switch (cases){
        case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2lf and %.2lf\n", root1, root2);
        break;
        case -1:
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("%.2lf+i%.2lf and %.2f-i%.2f\n", realPart, imagPart, realPart, imagPart);
        break;
    case 0:
    root1 = root2 = -b / (2 * a);
        printf(" %.2lf;", root1);
        break;
    }
    return 0;
} 
