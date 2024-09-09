// Required: 
//  read first name
//  read last name
//  print full name

#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};


stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter First Name: ";
    cin >> Info.FirstName;

    cout << "Enter Last Name: ";
    cin >> Info.LastName;

    return Info;
}


string MakeFullName(stInfo Info, bool Reversed)
{
    if(Reversed)
        return (Info.LastName + " " + Info.FirstName);
    else
        return (Info.FirstName + " " + Info.LastName);
}


void PrintFullName(string FullName)
{
    cout << "Full Name Is: " << FullName << endl;
}



int main()
{
    PrintFullName( MakeFullName( ReadInfo(), 1 ) );

    return 0;
}