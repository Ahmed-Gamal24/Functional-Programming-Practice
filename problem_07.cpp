// Required: 
//  read number
//  calculate half of that number
//  print the half of number

#include <iostream>
#include <string>
using namespace std;

float ReadNumber()
{
    float num;
    cout << "Please Enter Number: ";
    cin >> num;
    return num;
}


float CalcHalfNumber(float num)
{
    float number = num / 2;
    return (float) number;
}


void PrintHalfNumber(float num)
{
    string result =  "The Half Of " + to_string(num) +  " Is: " + to_string(CalcHalfNumber(num));
    cout << result << endl;
}


int main()
{

    PrintHalfNumber(ReadNumber());

    return 0;
}