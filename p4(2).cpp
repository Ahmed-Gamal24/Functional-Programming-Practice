// Required: 
//      read driver age
//      read if the driver has license or not
//      if age > 21  and  driver has license print "hired"
//      if not print "rejected"

#include <iostream>
#include <string>
using namespace std;


struct stDriverInfo
{
    float Age;
    bool HasDrivingLicense;
};


stDriverInfo ReadDriverInfo()
{
    stDriverInfo info;

    cout << "Enter Your Age: ";
    cin >> info.Age;

    cout << "Do You Have a Driver License?! : ";
    cin >> info.HasDrivingLicense;

    return info;
}


bool IsAccepted(stDriverInfo DriverInfo)
{
    return (DriverInfo.Age > 21 && DriverInfo.HasDrivingLicense);       
}


void PrintResult(stDriverInfo DriverInfo)
{
    if( IsAccepted(DriverInfo) )
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main()
{
    PrintResult( ReadDriverInfo() );

    return 0;
}