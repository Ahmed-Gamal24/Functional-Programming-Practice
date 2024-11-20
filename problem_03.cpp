// Required: read number and Print Even Or Odd

#include <iostream>
#include <string>
using namespace std;


int ReadNumber()
{
    int num;
    cout << "Please Enter Number: ";
    cin >> num;
    return num;
}


enum enNumberType { Even = 1, Odd = 2 };

enNumberType CheckEvenOdd(int num)
{
    int result = num % 2;
    return ( result == 0 ? enNumberType::Even :enNumberType::Odd);    
}


void PrintNumberType(enNumberType numType)
{
    if(numType == enNumberType::Even)
        cout << "The Number Is Even" << endl;
    else
        cout << "The Number Is Odd" << endl;
}


int main()
{

    PrintNumberType( CheckEvenOdd( ReadNumber() ) );

    return 0;
}