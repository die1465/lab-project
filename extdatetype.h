#ifndef datety
#define datety
#include "datetypeimp.cpp"
class extdatetype : public datetype{
    protected:
    string strmonth;
public:
    extdatetype(){}
    extdatetype(int d,int m,int y);
    string returnMonthName();
    void printMM_DD_YYYY();
    void printMonth_DD_YYYY();
    void printDD_MM_YYYY();
    void printMonth_YYYY();
    void setMonth(int m);

};
#endif