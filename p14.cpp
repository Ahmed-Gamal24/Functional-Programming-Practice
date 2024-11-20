//-----------Required------------------------
// read two numbers from user and swap them
// ex: if A = 10  B = 20  make them A = 20  B = 10
//--------------------------------------------


#include <iostream>
using namespace std;


void ReadNumbers(float &Num1, float &Num2){

    cout << "Enter First Number: " ;
    cin >> Num1;

    cout << "Enter Second Number: ";
    cin >> Num2;
}

void SwapNumbers(float &Num1, float &Num2){
    float temp;
    temp = Num1;
    Num1 = Num2;
    Num2 = temp;
}

void PrintNumbers(float Num1, float Num2){
    cout << "First Number = " << Num1 << endl;
    cout << "Second Number = " << Num2 << endl;
}



int main() 
{

    float Num1, Num2;
    ReadNumbers(Num1, Num2);

    cout << "--------Numbers Before Swapping---------\n";
    PrintNumbers(Num1, Num2);
    SwapNumbers(Num1, Num2);

    cout << "--------Numbers After Swapping---------\n";
    PrintNumbers(Num1, Num2);


    return 0;
}