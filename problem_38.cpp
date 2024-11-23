//--------------Required----------------------------------
// read number from user and check if number prime or not
//--------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message){
    int Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

enPrimeNotPrime CheckPrimeNotPrime(){
    int Num = ReadPositiveNumber("Enter Number: ");
    for(int counter = 2; counter <= sqrt(Num); ++counter){
        if(Num % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintResult(enPrimeNotPrime Result){
    if(Result == enPrimeNotPrime::Prime)
        cout << "Prime" << endl;
    else if(Result == enPrimeNotPrime::NotPrime)
        cout << "Not Prime" << endl;
}


int main(){

    PrintResult(CheckPrimeNotPrime());

    return 0;
}