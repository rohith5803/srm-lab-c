// Mallaiah has deposited an amount in the bank.After some period of time, he wanted to know the interest 
// he is earning on the amount.So he went to the bank and got to know about the rate of the interest.Now he 
// would like to calculate the amount he earned with interest. Can you help Mallaiah?

// Functional Description:

// Interest = { Amount * Rate * Time) / 100

#include <stdio.h>
int main()
{
    float amount,rate,time,si;
    scanf("%f",&amount);
    scanf("%f",&rate);
    scanf("%f",&time);
    si = (amount*rate*time)/100;
    printf("%0.4f",si);
	return 0;
}