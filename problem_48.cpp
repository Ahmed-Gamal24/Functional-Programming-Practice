//--------------Required--------------------------------------------------------
// read a LoanAmount and How Many Months you need to settle
// and calculate Monthly installment amount
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

float CalcMonthlyInstallment(int LoanAmount, int TotalMonths){
    return LoanAmount / TotalMonths;
}


int main(){

    float LoanAmount = ReadPositiveNumber("Enter Loan Amount: "); 
    float TotalMonths = ReadPositiveNumber("How Many Months You Need to Settle: "); 
    cout << CalcMonthlyInstallment(LoanAmount, TotalMonths);

    return 0;
}