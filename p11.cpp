// Required: 
//  read three numbers
//  print the Averaga of these three numbers

#include <iostream>
#include <string>
using namespace std;



void ReadThreeNums(float &Num1, float &Num2, float &Num3)
{
    cout << "Enter First Number: ";
    cin >> Num1;

    cout << "Enter Second Number: ";
    cin >> Num2;

    cout << "Enter Third Number: ";
    cin >> Num3;

}


float SumOfThreeNums(float Num1, float Num2, float Num3)
{
    float Result = Num1 + Num2 + Num3;
    return Result;
}


float CalcAvg(float Num1, float Num2, float Num3)
{
    float Avg = SumOfThreeNums(Num1,  Num2, Num3) / 3;
    return (float) Avg;
}


enum enPassFail {Pass = 1, Fail = 2};

enPassFail CheckAvg(float Avg)
{
    if(Avg >= 50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;     
}


void PrintAvg(float Avg)
{
    cout <<" Average = " << Avg << endl;
    
    if(CheckAvg(Avg) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}
 


int main()
{
    float Num1, Num2, Num3;
    ReadThreeNums(Num1, Num2, Num3); 
    PrintAvg( CalcAvg( Num1, Num2, Num3 ) );

    return 0;
}