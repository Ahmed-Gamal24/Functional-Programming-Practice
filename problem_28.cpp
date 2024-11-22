//----------Required--------------------------------------
// calc and print sum of odd numbers from 1 to N
//--------------------------------------------------------

#include <iostream>
using namespace std;

int ReadNumber(){
    int Num;
    cout << "Enter Number: ";
    cin >> Num;
    return Num;
}

enum CheckEvenOdd {odd = 1, even = 2};

CheckEvenOdd CheckIfOdd(int Num){
    if(Num % 2 == 0)
        return CheckEvenOdd::even;
    else
        return CheckEvenOdd::odd;
}


int CalcSumOddNumbersFrom1toN(int N){
    int sum = 0;
    for(int i = 1; i <= N; ++i){
        if(CheckIfOdd(i) == CheckEvenOdd::odd)
            sum += i;
    }

    return sum;
}

void PrintResult(int Result){
    cout << "Sum Of Odd Numbers From 1 to N = " << Result << endl;
}


int main(){

    PrintResult(CalcSumOddNumbersFrom1toN(ReadNumber()));

    return 0;
}