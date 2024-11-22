//-----------Required-----------------------------------------------
// age is valid when it is in range 18 and 50
//------------------------------------------------------------------



#include <iostream>
using namespace std;


int ReadAge(){
    int age;
    cout << "Enter Age: ";
    cin >> age;
    return age;
}


bool ValidateNumberInRange(int Number, int From, int To){
    return(Number >= From && Number <= To);
}

void PrintResult(int Age){
    if(ValidateNumberInRange(Age, 18, 50)) 
        cout << "Age Is Valid" << endl;
    else    
        cout << "Age Is Not Valid" << endl;
}


int main(){

    PrintResult(ReadAge());


    return 0;
}