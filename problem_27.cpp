//----------Required--------------------------------------
// print numbers from N to 1 using while loop 
// print numbers from N to 1 using Do While loop
// print numbers from N to 1 using For Loop 
//--------------------------------------------------------

#include <iostream>
using namespace std;

int ReadNumber(){
    int Num;
    cout << "Enter Number: ";
    cin >> Num;
    return Num;
}

void PrintRangeFromNto1_UsingWhile(int N){
    while(N > 0){
        cout << N << endl;
        N--;
    }
}

void PrintRangeFromNto1_UsingDoWhile(int N){

    if(N <= 0)
    {
        cout << "N should be Positive\n";
    }
    else
    {
        do
        {
            cout << N << endl;
            N--;
        } while (N > 0);
    }
    
}

void PrintRangeFromNto1_UsingFor(int N){
    for(int i = N; i > 0; --i)
    {
        cout << i << endl;
    }
}


int main(){

    int N = ReadNumber();
    PrintRangeFromNto1_UsingWhile(N);
    cout << "----------------------\n";
    PrintRangeFromNto1_UsingDoWhile(N);
    cout << "----------------------\n";
    PrintRangeFromNto1_UsingFor(N);

    return 0;
}