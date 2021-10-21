// Arulmozhiyarman's Dream come true after he got an Appointment order from Google Simon's family was very 
// happy of his achievement.The company mentioned Basic Salary, DA, HRA with some other 
// benefits But not highlighted the Gross salary in the orderArulmazhivarman's father wanted to know the Gross salary of his son
// Can you help Arulmazhivarman's father calculating it?

#include<stdio.h>
int main(){
    int GrossPayment,basic,da,hra;
    scanf("%d %d %d",&basic,&da,&hra);
    da  = da  *  basic/100;
    hra = hra *  basic/100;
    GrossPayment = basic + da + hra;
    printf("%d",GrossPayment);
    return 0;
}