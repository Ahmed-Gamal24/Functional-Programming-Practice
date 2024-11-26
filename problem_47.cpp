//--------------Required--------------------------------------------------------
// read a LoanAmount and MonthlyPayment and calculate how many months you need
// to settle the loan
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){
    float Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

int CalcNeedMonths(int LoanAmount, int MonthlyPayment){
    return LoanAmount / MonthlyPayment;
}


int main(){

    int LoanAmount = ReadPositiveNumber("Enter Loan Amount: "); 
    int MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment: "); 
    cout << CalcNeedMonths(LoanAmount, MonthlyPayment);

    return 0;
}