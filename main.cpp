#include "calendartypeimp.cpp"
int main(){
    calendartype c;
    int month,year;
    bool entireyear;
    cout << "do you want to print an entire year or just a month?(0 for month or 1 for year)"<<endl;
    cin >> entireyear;
    if(!entireyear){
    cout << "enter the month that u want to get printed as a calendar"<<endl;
    cin >> month;
    cout << "enter the year you want that month to be in"<<endl;
    cin >> year;
    c.setMonth(month);
    c.setYear(year);
    c.printCalander();
    cout << endl;
    }else{
    cout << "what year do you want to print the entire calendar for?"<<endl;
    cin >> year;
    for (int i = 1; i <= 12; i++)
    {
    c.setMonth(i);
    c.setYear(year);
    c.printCalander();
    cout << endl;    
    }
    
    
    }
    return 0;
}