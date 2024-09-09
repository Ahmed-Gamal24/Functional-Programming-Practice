// Required: 
//  read driver age
//  read if the driver has license or not
//  - if age > 21 and driver has license --> print "Hired"
//  - if the driver has only recommendation   --> print"Hired"
//  - if the driver age > 21   and has license and has recommendation --> print "Hired"
//  - if else print "Rejected"

#include <iostream>
#include <string>
using namespace std;


struct stDriverInfo
{
    float Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};


stDriverInfo ReadDriverInfo()
{
    stDriverInfo info;

    cout << "Enter Your Age: ";
    cin >> info.Age;

    cout << "Do You Have a Driver License?! : ";
    cin >> info.HasDrivingLicense;

    cout << "Do You Have Recommendation?! : ";
    cin >> info.HasRecommendation;

    return info;
}


bool IsAccepted(stDriverInfo DriverInfo)
{
    return ( (DriverInfo.Age > 21 && DriverInfo.HasDrivingLicense) ||  DriverInfo.HasRecommendation);       
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