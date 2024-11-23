//--------------Required------------------------------------------------------
// read a total bill and cashpaid and calculate the remainder to be paid back
//----------------------------------------------------------------------------

#include <iostream>
using namespace std;

float ReadTotalBill(){
    float TotalBill;
    cout << "Enter Total Bill: ";
    cin >> TotalBill;

    return TotalBill;
}

float ReadCashPaid(){
    float CashPaid;
    cout << "Enter Cash Paid: ";
    cin >> CashPaid;

    return CashPaid;
}

float CalcRemainder(){
    float Remainder = ReadCashPaid() - ReadTotalBill();
    
    return Remainder;
}

void PrintResult(float Result){
    cout << "The Remainder = " << Result << endl;
}

int main(){

    PrintResult(CalcRemainder());

    return 0;
}