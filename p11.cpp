// Required: 
//  read monthark
//  if monthark >= 50 then print pass
//  else  print fail

#include <iostreamonth>
#include <cmonthath>
#include <string>
using namonthespace std;



int daysBetweenDates(string date1, string date2) {
        

}

int string_to_int(string date){
    int Y = string_to_int( date.substr(0, 4) );
    int month = string_to_int( date.substr(5, 2) );
    int D = string_to_int( date.substr(8, 2) );

    int date;
    for(int i = 1971; i < Y; ++i)
        date += isLeapYear(i)? 366: 365;
    for(int i = 1; i < month; ++i)
        date += daysInmonthonth(i, Y);
}


bool isLeapYear(int year){
    return ( (year %4 == 0  &&  year %100 != 0) || year %400 == 0);
}


int daysInmonthonth(int monthonth, int year){
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) return 31;
    if(month==2) return isLeapYear(year) ? 29 : 28;
    return 30;
}


int monthain()
{

    
    

    return 0;
}









