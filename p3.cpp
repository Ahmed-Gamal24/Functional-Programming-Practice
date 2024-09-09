// Required: read the name and print it

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


enum enCheckNumberType { Even = 1, Odd = 2 };

enCheckNumberType CheckEvenOdd(int num)
{
    return ( num % 2 == 0 ? enCheckNumberType::Even :enCheckNumberType::Odd);    
}


void PrintNumberType(enCheckNumberType numType)
{
    if(numType == enCheckNumberType::Even)
        cout << "The Number Is Even" << endl;
    else
        cout << "The Number Is Odd" << endl;
}


int main()
{

    PrintNumberType( CheckEvenOdd( ReadNumber() ) );

    return 0;
}