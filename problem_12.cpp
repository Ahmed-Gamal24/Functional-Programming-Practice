//-----------Required------------------------
// read two numbers from user and print the max of them
//--------------------------------------------


#include <iostream>
using namespace std;


void ReadNumbers(float &Num1, float &Num2){

    cout << "Enter First Number: " ;
    cin >> Num1;

    cout << "Enter Second Number: ";
    cin >> Num2;
}


float FindMax(float Num1, float Num2){
    return (Num1 > Num2? Num1 : Num2);
}

void PrintMax(float MaxNum)
{
    cout << "The Maximum Number = " << MaxNum << endl;
}


int main()
{

    float Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintMax(FindMax(Num1, Num2));


    return 0;
}