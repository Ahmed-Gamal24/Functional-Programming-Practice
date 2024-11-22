//----------Required--------------------------------------
// print numbers from 1 to N using while loop 
// print numbers from 1 to N using Do While loop
// print numbers from 1 to N using For Loop 
//--------------------------------------------------------

#include <iostream>
using namespace std;

int ReadNumber(){
    int Num;
    cout << "Enter Number: ";
    cin >> Num;
    return Num;
}

void PrintRangeFrom1toN_UsingWhile(int N){
    int start = 1;
    while(start <= N){
        cout << start << endl;
        start++;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int N){
    if(N <= 0)
    {
        cout << "N should be positive\n";
    }
    else
    {
        int start = 0;
        do
        {
        start++;
        cout << start << endl;
        } while (start < N);    
    }
    
}

void PrintRangeFrom1toN_UsingFor(int N){
    for(int i = 1; i <= N; ++i)
    {
        cout << i << endl;
    }
}


int main(){

    int N = ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
    cout << "----------------------\n";
    PrintRangeFrom1toN_UsingDoWhile(N);
    cout << "----------------------\n";
    PrintRangeFrom1toN_UsingFor(N);

    return 0;
}