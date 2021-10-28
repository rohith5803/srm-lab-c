// Britta's parents said they will buy her a puppy on a 2nd week of a month.They selected a puppy but 
// the vet said it will be delivered only based on the token given to them.The token was printed from 
// 1-7 in number representing days of the week.Britta is very eager and needs to Know the Day on 
// providing the week number [1-7].Can you help her?If the input is other than 1 
// to 7 print "Invalid Input" Constraints

#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    if(day ==1){
        printf("Monday");}
    else if(day == 2){
        printf("Tuesday");}
    else if(day == 3){
        printf("Wednesday");}
    else if(day == 4){
        printf("Thursday");}
    else if(day == 5){
        printf("Friday");}
    else if(day == 6){
        printf("Saturday");}
    else if(day == 7){
        printf("Sunday");}
    else{
        printf("Invalid Input");}
    return 0;
}



