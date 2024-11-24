//--------------Required--------------------------------------------------------
// read the duration in seconds
// print the duration in days:hours:minuts:seconds
//------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;


struct stDuration
{
    float NumberOfDays;
    float NumberOfHours;
    float NumberOfMinuts;
    float NumberOfSeconds;
};

float ReadPositiveNumber(string Message){
    float Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

float SecondsToDays(float seconds){
    return seconds/60/60/24;
}
float DaysToHours(float Days){
    return Days * 24;
}
float HoursToMinuts(float Hours){
    return Hours*60;
}
//To Seconds Functions
float DaysToSeconds(float days){
    return days*24*60*60;
}
float HoursToSeconds(float Hours){
    return Hours*60*60;
}
float MinutsToSeconds(float minuts){
    return minuts*60;
}

stDuration SecondsToDaysHoursMinutsSeconds(float TotalSeconds){
    stDuration Duration;
    float Remainder;

    //calculate number of days
    Duration.NumberOfDays = floor( SecondsToDays(TotalSeconds) );
    Remainder = fmod(SecondsToDays(TotalSeconds), Duration.NumberOfDays);
    //calculate number of hours
    Duration.NumberOfHours = floor( DaysToHours(Remainder) );
    Remainder = fmod(DaysToHours(Remainder), Duration.NumberOfHours);
    //calculate number of Minuts
    Duration.NumberOfMinuts = floor(HoursToMinuts(Remainder));
    Remainder = fmod(HoursToMinuts(Remainder), Duration.NumberOfMinuts);
    //calculate number of seconds
    Duration.NumberOfSeconds = TotalSeconds - ( DaysToSeconds(Duration.NumberOfDays) + HoursToSeconds(Duration.NumberOfHours) + MinutsToSeconds(Duration.NumberOfMinuts) );

    return Duration;
}

void Print(stDuration Duration){
    cout << Duration.NumberOfDays << " : " << Duration.NumberOfHours
        << " : " << Duration.NumberOfMinuts << " : " << Duration.NumberOfSeconds << endl;
}

int main(){

    float NumberOfSeconds = ReadPositiveNumber("Enter Number Of Seconds: ");
    Print(SecondsToDaysHoursMinutsSeconds(NumberOfSeconds));

    return 0;
}