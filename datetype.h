#ifndef datet
#define datet
#include<iostream>
#include<string>
using namespace std;

class datetype{
    protected:
int month, day, year;
public:
    datetype(){}
    datetype(int d,int m,int y);
    void setMonth(int m);
    void setDay(int m);
    void setYear(int m);
    int returnMonth();
    int returnDay();
    int returnYear();
    bool leapyear();
    int numOfDaysInMonth();
    int numOfDaysInMonth(int m);
    int numOfDaysPast();
    int numOfDaysLeft();
    void addDaysToDate(int n);
};
#endif