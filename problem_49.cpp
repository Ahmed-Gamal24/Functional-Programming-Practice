//--------------Required--------------------------------------------------------
// read the ATM PIN code from the user
// then check if the PIN code = 1234, then show the balance to user 
// otherwise print "Wrong PIN" and ask the user to enter pin agian
// assume user Balance is 7500
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

float ReadPIN(string Message){
    float Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

void Login(){
    float Balance = 7500;
    int PIN = ReadPIN("Enter PIN Number: ");
    while(PIN != 1234)
    {
        system("color 4F");
        cout << "Wrong PIN,Try Again: ";
        cin >> PIN;
    }

    system("color 2F");
    cout << "Your Balance = " << Balance << endl;
}

int main(){

    Login();


    return 0;
}