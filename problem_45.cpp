//--------------Required--------------------------------------------------------
// read number from user and print month name
// if 1 print january
// if 2 print february
// ................
// if 12 print december
// otherwise print "wrong Month" and ask the user to enter the day again
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;


enum enDayOfWeek {Jan=1, feb=2, mar=3, april=4, may=5, june=6, july=7,
                 august=8, sep=9, oct=10, nov=11, dec=12};

int ReadNumberInRange(string Message, int From, int To){
    int Number;
    cout << Message;
    cin >> Number;
    while(Number < From || Number > To)
    {
        cout << "Wrong Month Try Again: ";
        cin >> Number;
    }


    return Number;
}

enDayOfWeek ReadMonthOfYear(){
    return (enDayOfWeek)ReadNumberInRange
    ("Enter Month Number: Jan=1, feb=2, mar=3, april=4, may=5, june=6, july=7, august=8, sep=9, oct=10, nov=11, dec=12 : ",1 ,12);
}

string GetMonthOfYear(enDayOfWeek DayOfWeek){
    if(DayOfWeek == enDayOfWeek::Jan) return "January";
    if(DayOfWeek == enDayOfWeek::feb) return "February";
    if(DayOfWeek == enDayOfWeek::mar) return "March";
    if(DayOfWeek == enDayOfWeek::april) return "April";
    if(DayOfWeek == enDayOfWeek::may) return "May";
    if(DayOfWeek == enDayOfWeek::june) return "June";
    if(DayOfWeek == enDayOfWeek::july) return "July";
    if(DayOfWeek == enDayOfWeek::august) return "August";
    if(DayOfWeek == enDayOfWeek::sep) return "September";
    if(DayOfWeek == enDayOfWeek::oct) return "October";
    if(DayOfWeek == enDayOfWeek::nov) return "November";
    if(DayOfWeek == enDayOfWeek::dec) return "December";

    return "InValid";
}

int main(){

    cout << GetMonthOfYear(ReadMonthOfYear());

    return 0;
}