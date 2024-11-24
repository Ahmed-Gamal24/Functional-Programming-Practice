//--------------Required--------------------------------------------------------
// read a NumberOfHours and calculate the number of weeks and days
//  included in that number
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;


float ReadPositiveNumber(string Message){
    float Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

float ConvertHoursToWeeks(float HoursNumber){
    float WeeksNumber = HoursNumber / 24 / 7;

    return WeeksNumber;
}

float ConvertHoursToDays(float HoursNumber){
    float DaysNumber = HoursNumber / 24;

    return DaysNumber;
}

void PrintWeeksAndDays(float HoursNumber){
    cout << "Number of Weeks: " << ConvertHoursToWeeks(HoursNumber) << endl; 
    cout << "Number of Days: " << ConvertHoursToDays(HoursNumber) << endl; 
}

int main(){


    float HoursNumber = ReadPositiveNumber("Enter Hours Number: ");
    PrintWeeksAndDays(HoursNumber);

    return 0;
}