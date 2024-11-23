//---------------------------Required--------------------------
// Read a Numbers (N and M) From User and Calcualte N power M
//-------------------------------------------------------------

#include <iostream>
using namespace std;


struct StNumbers{
    int N;
    int M;  
};

StNumbers ReadNumbers(){
    StNumbers Numbers;
    cout << "Enter Number: ";
    cin >> Numbers.N;

    cout << "Enter Power: ";
    cin >> Numbers.M;
    
    return Numbers;
}

int CalcNPowerM(StNumbers Numbers){
    int Result = 1;
    for(int i = 0; i < Numbers.M; ++i){
        Result*= Numbers.N;
    }
    
    return Result;
}


void PrintResult(int Result){
    cout << "Result = " << Result << endl;
}



int main(){

    PrintResult( CalcNPowerM( ReadNumbers() ) );


    return 0;
}