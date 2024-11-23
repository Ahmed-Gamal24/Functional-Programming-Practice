//---------------------------Required--------------------------
// Read Total Sales From User and calculate the Commision based on
// 1% if  >1000 000
// 2% if  >500k
// 3% if  >100k-500k
// 5% if  >50k-100k
// 0% if  otherwise
//-------------------------------------------------------------

#include <iostream>
using namespace std;


float ReadTotalSales(){
    float TotalSales;
    cout << "Enter Total Sales: ";
    cin >> TotalSales;    
    
    return TotalSales;
}

float CalcCommissionPercentage(float TotalSales){
    if(TotalSales > 1000000)
        return 0.01;
    else if(TotalSales >= 500000)
        return 0.02;
    else if(TotalSales >= 100000)
        return 0.03;
    else if(TotalSales >= 50000)
        return 0.05;
    else 
        return 0.00;
}

float CalcCommission(float TotalSales){
    return CalcCommissionPercentage(TotalSales) * TotalSales;
}

void PrintCommission(float Commission){
    cout << "Your Commission = " << Commission << endl;
}



int main(){

    PrintCommission(CalcCommission(ReadTotalSales()));


    return 0;
}