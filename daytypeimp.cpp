#include "daytype.h"
daytype::daytype(string d){
    days[0] = "sun";
    days[1]="mon";
    days[2] = "tue";
    days[3]="wed";
    days[4]="thu";
    days[5]="fri";
    days[6]="sat";
    day=d;
}
void daytype::setday(string d){
    day=d;
    for (int i = 0; i < 7; i++)
    {
        if(days[i]==d) daynum=i;
    }
    
}
void daytype::setday(int d){
    day=days[d];
    daynum=d;
    
    
}
void daytype::printday(){
    cout << "todays day is a "<< day <<endl;
}
string daytype::returnNextDay(){
    return days[daynum+1];
}
string daytype::returnday(int numOfDay){
    return days[numOfDay];
}
string daytype::returnPreviousDay(){
    if(daynum>0)return days[daynum-1];
    else return days[6];
}
int daytype::addDays(int daysToAdd){
    int addeddays = daynum+daysToAdd;
    daynum = addeddays%7;
    return addeddays%7;
}
int daytype::returnDayNum(){
    return daynum;
}