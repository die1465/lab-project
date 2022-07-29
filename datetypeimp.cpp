#include "datetype.h"
datetype::datetype(int d,int m,int y){
    day=d;
    month=m;
    year=y;
}
void datetype::setMonth(int m){
    if(m<=0||m>12) m=1;
    month=m;
}
void datetype::setDay(int d){
    if(d<=0 || d>31)d=1;
    day = d;
}
void datetype::setYear(int y){
    if(y<0) y=2000;
    year=y;
}
int datetype::returnMonth(){
    return month;
}
int datetype::returnDay(){
    return day;
}
int datetype::returnYear(){
    return year;
}
bool datetype::leapyear(){
    if(year%4==0 &&year%100!=0) return true;
    else return false;
}
int datetype::numOfDaysInMonth(){
    if(month==2){
        if(leapyear())return 29;
        else return 28;
    }
    else if(month==11||month==9||month==6||month==4)return 30;
    else return 31;
}
int datetype::numOfDaysInMonth(int m){
    if(m==2){
        if(leapyear())return 29;
        else return 28;
    }
    else if(m==11||m==9||m==6||m==4)return 30;
    else return 31;
}
int datetype::numOfDaysPast(){
    int sumOfDays=0;
    for (int i = 1; i < month; i++)
        sumOfDays += numOfDaysInMonth(i);
    sumOfDays +=day;
    return sumOfDays;
}
int datetype::numOfDaysLeft(){
    int sumOfDays=numOfDaysPast();
    if(leapyear()) sumOfDays=366-sumOfDays;
    else sumOfDays = 365-sumOfDays;
    return sumOfDays;
}
void datetype::addDaysToDate(int daystoadd){ 
    int sum=day+daystoadd;
    int newday;
    if(sum <= numOfDaysInMonth(month))
        newday=sum;
    else{
        newday=sum;
        for (int i = 0; i < 100; i++)
        {
            newday -=numOfDaysInMonth(month);
            if(newday<=numOfDaysInMonth(++month)) break;
            else{
                if(month==13) {
                month=1;
                year++;
                }
                newday -= numOfDaysInMonth(month);
                if(newday<=numOfDaysInMonth(++month)) break;
            }
        }
    }
    day=newday;
    //this algorithm that i developed :) works as follows
    //firstly: I'd add the number of days with the given number
    //secondly:I'd subtract that number from the # of days in the specific month to get the net # of days that i have to add to this month
    //thirdly: if the # is less that the # of day in that month I'd just add it to the number of days
    //if not, I'd repeat the second step and increment the number of the month after the subtraction operations
    //if I'm given more that 365 days to add, I'd have an if statement to ensure
    //the month would go back to 1 and increment the year by 1 instead of having month 13 which doesn't exist
}