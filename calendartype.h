#ifndef cal
#define cal
#include "extdatetypeimp.cpp"
#include "daytypeimp.cpp"

class calendartype{
 extdatetype date;
 daytype day;
public:
    calendartype(){

    }
    string firstDayOfMonth();
    void printCalander();
    void setMonth(int m);
    void setYear(int y);
    int returnMonth();
    int returnYear();
};
#endif