//---------------------------Required-----------------------------------------------
// Read a Number (N) From User and Calcualte N power 2 and N power 3 and N power 4
//----------------------------------------------------------------------------------

#include <iostream>
using namespace std;


int ReadNumber(){
    int Num;
    cout << "Enter Number: ";
    cin >> Num;
    
    return Num;
}

int CalcNthPowerOfNumber(int N, int Num){
    int Result = 1;
    for(int i = 0; i < N; ++i){
        Result*= Num;
    }
    
    return Result;
}

struct StPower{
    int pow2;
    int pow3;
    int pow4;
};

StPower CalcPowerOfNum(int Num){
    StPower PowerOfN;
    PowerOfN.pow2 = CalcNthPowerOfNumber(2, Num);
    PowerOfN.pow3 = CalcNthPowerOfNumber(3, Num);
    PowerOfN.pow4 = CalcNthPowerOfNumber(4, Num);

    return PowerOfN;
}

void PrintResult(StPower PowerOfN){
    cout << "N Power 2 = " << PowerOfN.pow2 << endl;
    cout << "N Power 3 = " << PowerOfN.pow3 << endl;
    cout << "N Power 4 = " << PowerOfN.pow4 << endl;
}



int main(){

    PrintResult( CalcPowerOfNum( ReadNumber() ) );


    return 0;
}