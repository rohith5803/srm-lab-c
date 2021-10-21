// Johnson was working as a Captain of the Giant Ship
// He was traveling from India to various countries around the world.The days of the travel may 
// differ from one country to another.To plan the upcoming travel the Johnson captain of the ship 
// wold like to know the travel days in the year:month:day format

#include<stdio.h>
int main(){
    int ndays,y,m,d;
    scanf("%d",&ndays);
    y = (ndays/365);
    m = (ndays - y * 365)/30;
    d = (ndays - y * 365 - m * 30);
    printf("%d Y(s) %d M(s) %d D(s)",y,m,d);
    return 0;
}