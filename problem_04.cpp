// Required: 
//      read driver age
//      read if the driver has license or not
//      if age > 21  and  driver has license print "hired"
//      if not print "rejected"

#include <iostream>
#include <string>
using namespace std;


float Readage()
{
    float num;
    cout << "Please Enter Your Age: ";
    cin >> num;
    return num;
}

bool CheckDriverLicense()
{
    int PressedNum;
    cout << "Press 1 If You Have License" << endl;
    cout << "Press 2 If Not" << endl;
    cout << "> ";
    cin >> PressedNum;
    return(PressedNum == 1 ? true: false);
}


void PrintDriverCase(float age, bool licensed)
{
    if(age > 21 && licensed)
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}


int main()
{
    PrintDriverCase( Readage(), CheckDriverLicense() );

    return 0;
}