//-----------Required-----------------------------------------------
// age is valid when it is in range 18 and 50
// read age untill it be between 18 and 50
//------------------------------------------------------------------



#include <iostream>
using namespace std;


int ReadAge(){
    int age;
    cout << "Enter Age Between 18 and 45: ";
    cin >> age;
    return age;
}


bool ValidateNumberInRange(int Number, int From, int To){
    return(Number >= From && Number <= To);
}


int ReadUntillAgeBetween(int From, int To){
    int Age = 0;
    do
    {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}


void PrintResult(int Age){
    cout << "Your Age Is Valid" << endl;
}
    





int main(){

    PrintResult(ReadUntillAgeBetween(18, 45));


    return 0;
}