//--------------Required--------------------------------------------------------
// read the ATM PIN code from the user just 3 times
// then check if the PIN code = 1234, then show the balance to user 
// otherwise print "Wrong PIN" and ask the user to enter pin agian
// assume user Balance is 7500
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

float ReadPIN(string Message) {
    float Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}


bool Login() {

    int PIN;
    for (int i = 0; i < 3; ++i)
    {
        PIN = ReadPIN("Enter PIN Number: ");

        if (PIN == 1234)
        {
            system("color 2F");
            return 1;
        }
        else
        {
            if (i == 2)
            {
                system("color 4F");
                cout << "Login Failed";
            }
            else
            {
                system("color 4F");
                cout << "Wrong PIN,Try Again: ";
            }
            
        }
    }

    return 0;
}



int main() {

    if (Login())
    {
        float Balance = 7500;
        cout << "Your Balance = " << Balance << endl;
    }

    return 0;
}