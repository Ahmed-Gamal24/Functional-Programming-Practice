//----------Required--------------------------------------
// calc and print sum of Odd Or Even Or All numbers from 1 to N
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
enum SumType {Odd = 4, Even = 5, All = 6};

CheckEvenOdd CheckIfOdd(int Num){
    if(Num % 2 == 0)
        return CheckEvenOdd::even;
    else
        return CheckEvenOdd::odd;
}


int CalcSumFrom1toN(int N, SumType SumType){
    int sum = 0;

    if(SumType == SumType::All)
    {
        for(int i = 1; i <= N; ++i)
             sum += i;
    }
    else if(SumType == SumType::Even)
    {
        for(int i = 1; i <= N; ++i)
        {
            if(CheckIfOdd(i) == CheckEvenOdd::even)
                sum += i;
        }            
    }
    else if(SumType == SumType::Odd)
    {
        for(int i = 1; i <= N; ++i)
        {
            if(CheckIfOdd(i) == CheckEvenOdd::odd)
                sum += i;
        } 
    }


    return sum;
}

void PrintResult(int Result, SumType SumType){
    
    if(SumType == SumType::All)
        cout << "Sum Of All Numbers = " << Result << endl;
    
    else if(SumType == SumType::Even)
        cout << "Sum Of Even Numbers = " << Result << endl;
    
      
    else if(SumType == SumType::Odd)
        cout << "Sum Of Odd Numbers = " << Result << endl; 
}


int main(){

    SumType sumType = SumType::Odd;
    int result = CalcSumFrom1toN( ReadNumber(), sumType );
    PrintResult(result,  sumType);

    return 0;
}