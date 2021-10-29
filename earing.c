// Agathiyan is the Chief In charge for carrying out World Economic Survey in India.As a part of survey 
// his team have collected the salaries of the citizens of India The Salaries of different people 
// are in different number of digits.Now Agathiyan would like to classify the earnings of the 
// citizen based on the number of digits of his/her salary into 5 different categories as follows

// 1 Insufficient Eaming

// 2 Very Low Earning

// 3 bow Earning

// 4. Sufficient Earning

// 5 High Earning
// Can you help him do the above classification if he gives the salary of the particular person to you as 
// input?


#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N<=9){printf("Insufficient Earning");}
    else if(N<=99){printf("Very Low Earning");}
    else if(N<=999){printf("Low Earning");}
    else if(N<=9999){printf("Sufficient Earning");}
    else if(N>9999){printf("High Earning");}
    return 0;
}