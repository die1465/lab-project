#include "calendartype.h"

// calendartype::calendartype(int d){

// }
string calendartype::firstDayOfMonth(){
    int d=1;
    int y = date.returnYear() - (14-date.returnMonth())/12;
    int m = date.returnMonth() +12 * ((14-date.returnMonth()) / 12) -2;
    int firstday = (d + y + y / 4 - y / 100 + y / 400 + (31 * m / 12)) % 7;
    //using Tomohiko Sakamoto’s Algorithm to find the first day of the month
    day.setday(firstday);
    return day.returnday(firstday);
}
void calendartype::printCalander(){
    string s = firstDayOfMonth();
    
    cout << "\t "<<date.returnMonthName()<<" "<<date.returnYear() <<endl;
    cout << "Sun "<<"Mon "<<"Tue "<<"Wed "<<"Thu "<<"Fri "<<"Sat "<<endl;
    for (int i = 1; i <= date.numOfDaysInMonth(); i++)
    {
        int daynum = day.returnDayNum();
        if(i==1)
        for (int j = 0; j < daynum; j++)
            cout << "    ";
        //this is for spacing the first date to ensure the day
        //is printed under the correct dayname
        if((daynum)%6==0&&daynum!=0) cout<<i<<"    " << endl;
        else if(i>=10)   cout << i << "  ";
        else cout << i << "   ";
        day.addDays(1);
    }
}
void calendartype::setYear(int y){
    date.setYear(y);
}
void calendartype::setMonth(int m){
    date.setMonth(m);
}
int calendartype::returnMonth(){
    return date.returnMonth();
}
int calendartype::returnYear(){
    return date.returnYear();
}