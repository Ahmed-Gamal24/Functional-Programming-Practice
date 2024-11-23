//--------------Required----------------------------------------------------------
// keep reading numbers from user and calculate sum of them untill he enter -99
//--------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;


float ReadNumber(string Message){
    float Num;
    cout << Message;
    cin >> Num;

    return Num;
}

float CalcSum(){
    float sum = 0; int counter = 1; float number;

    do
    {
        number = ReadNumber("Enter Number " + to_string(counter) + ": " );
        if(number == -99)
            break;
        sum += number;
        counter++;
    } while (number != 99);

    return sum;
}

void PrintResult(float Result){
    cout << "Sum Of Number = " << Result << endl;
}


int main(){

    PrintResult(CalcSum());


    return 0;
}