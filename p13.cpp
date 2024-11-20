//-----------Required------------------------
// read three numbers from user and print the max of them
//--------------------------------------------


#include <iostream>
using namespace std;


void ReadNumbers(float &Num1, float &Num2, float &Num3){

    cout << "Enter First Number: " ;
    cin >> Num1;

    cout << "Enter Second Number: ";
    cin >> Num2;

    cout << "Enter Third Number: ";
    cin >> Num3;
}


float FindMax(float Num1, float Num2, float Num3){
    if(Num1 > Num2)
    {
        if(Num1 > Num3)
            return Num1;
        else 
            return Num3;
    }
    else if (Num2 > Num3)
        return Num2;
    else 
        return Num3;
}

void PrintMax(float MaxNum)
{
    cout << "The Maximum Number = " << MaxNum << endl;
}


int main()
{

    float Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintMax(FindMax(Num1, Num2, Num3));


    return 0;
}