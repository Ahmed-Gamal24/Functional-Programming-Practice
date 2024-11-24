//--------------Required--------------------------------------------------------
// read the duration in days, hours, minutes and seconds
// print the duration in seconds
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;


struct stDuration
{
    float days;
    float hours;
    float minuts;
    float seconds;
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

stDuration ReadDuration(){
    stDuration Duration;
    Duration.days = ReadPositiveNumber("Enter Number of Days: ");
    Duration.hours = ReadPositiveNumber("Enter Number of Hours: ");
    Duration.minuts = ReadPositiveNumber("Enter Number of Minuts: ");
    Duration.seconds = ReadPositiveNumber("Enter Number of Seconds: ");

    return Duration;
}

float ToSeconds(stDuration Duration){
    float TotalSeconds = Duration.days*24*60*60 + Duration.hours*60*60 + Duration.minuts*60 + Duration.seconds;
    
    return TotalSeconds;
}


int main(){


    cout << "Total Seconds: " << ToSeconds(ReadDuration());

    return 0;
}