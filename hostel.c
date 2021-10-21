#include <stdio.h>
int main()
{
    int alvqntoffood,messcnt,dividedqnt,remfood;
    printf("Enter the alvgntoffood:");
    scanf("%d",&alvqntoffood);
    printf("Enter total number of mess: ");
    scanf("%d",&messcnt);

    dividedqnt = alvqntoffood/messcnt;
    remfood = alvqntoffood%messcnt;
    printf("%d %d ",dividedqnt,remfood);
	return 0;
}