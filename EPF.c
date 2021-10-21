// Tina successfully completed her first Month as Navy Officer and her much awaited first month salary 
// got credited into her account and also go her salary report in her mail.On seeing the salary report 
// there is no information available about the Employee provident fund So Tina would like to 
// know about the Employee and Employer Contribution for EPF Can you help her?

#include <stdio.h>

#define Employee_percentage 17.5f
#define Employer_percentage 23.5f
int main(){
    float basicPay,employeeFund,employerFund;
     
    scanf("%f",&basicPay);
     
    employeeFund=(basicPay/100)*Employee_percentage;
    employerFund=(basicPay/100)*Employer_percentage;
     
    printf("%.2f\n",employeeFund);
    printf("%.2f\n",employerFund);
     
    return 0;   
}