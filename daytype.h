#ifndef dayt
#define dayt
#include<iostream>
#include<string>
using namespace std;
class daytype{
    protected:
    string days[7];
    string day;
    int daynum;
    public:
    
    daytype(string d="sun");
    void setday(string d);
    void setday(int d);
    void printday();
    string returnday();
    string returnday(int numOfDay);
    int returnDayNum();
    string returnNextDay();
    string returnPreviousDay();
    int addDays(int d);
};
#endif