//--------------Required--------------------------------------------------------
// read a Bill Value of resturant and add service fee (10%) 
// and sales tax (16%) from the (Bill Value + Service Fee)
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

float CalcServiceFee(float BillValue){
    float ServiceFee = 0.1 * BillValue;
    return ServiceFee;
}

float CalcSalesTax(float BillValue){
    float SalesTax = 0.16 * (BillValue + CalcServiceFee(BillValue));
    return SalesTax;
}

void PrintTotalBill(float BillValue){
    float TotalBillValue = BillValue + CalcServiceFee(BillValue) + CalcSalesTax(BillValue);
    cout << "Total Bill Value = " << TotalBillValue;
}



int main(){

    PrintTotalBill(ReadPositiveNumber("Enter Bill Value: "));

    return 0;
}