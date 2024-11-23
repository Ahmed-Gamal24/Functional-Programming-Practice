//---------------------------Required--------------------------
// Read Grade From User and print
// A --> 90 - 100
// B --> 80 - 89
// C --> 70 - 79
// D --> 60 - 69
// E --> 50 - 59
// F --> otherwise
//-------------------------------------------------------------

#include <iostream>
using namespace std;


float ReadGrade(){
    float Grade;
    do
    {
        cout << "Enter a Grade Between 0 and 100: ";
        cin >> Grade;
    } while (Grade < 0 || Grade > 100);
    
    
    return Grade;
}

char GetGradeLetter(float Grade){
    if(Grade >= 90)
        return 'A';
    else if(Grade >= 80)
        return 'B';
    else if(Grade >= 70)
        return 'C';
    else if(Grade >= 60)
        return 'C';
    else if(Grade >= 60)
        return 'D';
    else if(Grade >= 50)
        return 'E';
    else 
        return 'F';
}

void PrintResult(char Result){
    cout << "Your Mark is: " << Result << endl;
}



int main(){

    PrintResult( GetGradeLetter( ReadGrade() ) );


    return 0;
}