//--------------Required--------------------------------------------------------
// print Capital Letters From A to Z
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void PrintAToZLetters(){
    for(int i = 65; i <= 90; ++i)
    {
        cout << char(i) << endl;
    }
}


int main(){

    PrintAToZLetters();

    return 0;
}