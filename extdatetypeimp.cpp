#include "extdatetype.h"
extdatetype::extdatetype(int d,int m,int y):datetype(d,m,y){
    if(month==1) strmonth="January";
    else if(month==2) strmonth="Febuary";
    else if(month==3) strmonth="March";
    else if(month==4) strmonth="April";
    else if(month==5) strmonth="May";
    else if(month==6) strmonth="June";
    else if(month==7) strmonth="July";
    else if(month==8) strmonth="August";
    else if(month==9) strmonth="September";
    else if(month==10) strmonth="October";
    else if(month==11) strmonth="November";
    else if(month==12) strmonth="December";
}
string extdatetype::returnMonthName(){
    return strmonth;
}
void extdatetype::setMonth(int month){
    if(month==1) strmonth="January";
    else if(month==2) strmonth="Febuary";
    else if(month==3) strmonth="March";
    else if(month==4) strmonth="April";
    else if(month==5) strmonth="May";
    else if(month==6) strmonth="June";
    else if(month==7) strmonth="July";
    else if(month==8) strmonth="August";
    else if(month==9) strmonth="September";
    else if(month==10) strmonth="October";
    else if(month==11) strmonth="November";
    else if(month==12) strmonth="December";
    datetype::setMonth(month);
}
void extdatetype::printMM_DD_YYYY(){
    cout << "the date is: "<< month<<"/"<<day<<"/"<<year<<endl;
}
void extdatetype::printDD_MM_YYYY(){
    cout << "the date is: "<< day<<"/"<<month<<"/"<<year<<endl;
}
void extdatetype::printMonth_DD_YYYY(){
    cout << "the date is: "<< strmonth<<" "<<day<<","<<year<<endl;
}
void extdatetype::printMonth_YYYY(){
    cout << "the date is: "<< strmonth<<" "<<year<<endl;
}