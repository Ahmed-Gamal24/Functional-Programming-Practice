//----------Required--------------------------------------
// calc and print Factorial of N
//--------------------------------------------------------

#include <iostream>
using namespace std;

int ReadPositiveNumber(){
    int Num;
    cout << "Enter Positive Number: ";
    cin >> Num;
    
    while (Num <= 0)
    {
        cout << "Positive Numbers Only!\n";
        cin >> Num;
    }

    return Num;
}

int CalcFactorial(int N){
    int Factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        Factorial *= i;
    }

    return Factorial;    
}


void PrintResult(int Result){
    cout << "Factorial Of N = " << Result << endl;
}


int main(){

    PrintResult( CalcFactorial( ReadPositiveNumber() ) );


    return 0;
}