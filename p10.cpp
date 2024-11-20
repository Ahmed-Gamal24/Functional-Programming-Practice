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

void PrintAvg(float Avg)
{
    cout <<" Average = " << Avg << endl;
}



int main()
{
    float Num1, Num2, Num3;
    ReadThreeNums(Num1, Num2, Num3); 
    PrintAvg( CalcAvg( Num1, Num2, Num3 ) );

    return 0;
}