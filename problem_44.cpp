//--------------Required--------------------------------------------------------
// read number from user and print day
// if 1 print sunday
// if 2 print monday
// ................
// if 7 print saturday
// otherwise print "wrong day" and ask the user to enter the day again
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;


enum enDayOfWeek {Sat=1, Sun=2, Mon=3, Tues=4, Wen=5, Thur=6, Fri=7};

int ReadNumberInRange(string Message, int From, int To){
    int Number;
    cout << Message;
    cin >> Number;
    while(Number < From || Number > To)
    {
        cout << "Wrong Day Try Again: ";
        cin >> Number;
    }


    return Number;
}

enDayOfWeek ReadDayOfWeek(){
    return (enDayOfWeek)ReadNumberInRange("Enter Day Number: Sat=1, Sun=2, Mon=3, Tues=4, Wen=5, Thur=6, Fri=7 : ",1 ,6);
}

string GetDayOfWeek(enDayOfWeek DayOfWeek){
    if(DayOfWeek == enDayOfWeek::Sat) return "Saturday";
    if(DayOfWeek == enDayOfWeek::Sun) return "Sunday";
    if(DayOfWeek == enDayOfWeek::Mon) return "Monday";
    if(DayOfWeek == enDayOfWeek::Tues) return "Tuesday";
    if(DayOfWeek == enDayOfWeek::Wen) return "Wensday";
    if(DayOfWeek == enDayOfWeek::Thur) return "Thurusday";
    if(DayOfWeek == enDayOfWeek::Fri) return "Fridayday";

    return "InValid";
}

int main(){

    cout << GetDayOfWeek(ReadDayOfWeek());

    return 0;
}