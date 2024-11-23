//--------------Required------------------------------
// make a simple calculator
// read number1, number2 and operation type 
// calculate the result based on these inputs
//-----------------------------------------------------

#include <iostream>
using namespace std;


enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message){
    float Num;
    cout << Message;
    cin >> Num;

    return Num;
}

enOperationType ReadOperationType(){
    char OperationType;
    cout << "Enter Operation Type (+, -, *, /)?!: ";
    cin >> OperationType;

    return (enOperationType) OperationType;
}

float CalcResult(float Num1, float Num2, enOperationType OperationType){
    float Result;
    switch (OperationType)
    {
    case enOperationType::Add:
        Result = Num1 + Num2;
        break; 
    case enOperationType::Subtract:
        Result = Num1 - Num2;
        break; 
    case enOperationType::Multiply:
        Result = Num1 * Num2;
        break; 
    case enOperationType::Divide:
        Result = Num1 / Num2;
        break; 
    }

    return Result;
}

void PrintResult(float Result){
    cout << "Result = " << Result << endl;
}

int main(){

    float Num1 = ReadNumber("Enter First Number: ");
    float Num2 = ReadNumber("Enter Second Number: ");
    enOperationType OperationType = ReadOperationType();
    PrintResult(CalcResult(Num1, Num2, OperationType));


    return 0;
}