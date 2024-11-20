// Required: 
//  read mark
//  if mark >= 50 then print pass
//  else  print fail

#include <iostream>
#include <string>
using namespace std;


float ReadMark()
{
    float Mark;
    cout << "Enter Your Mark: ";
    cin >> Mark;
    return Mark;
}


enum enCheckPassing {Pass = 1, Fail = 2};
enCheckPassing CheckPassing(float Mark)
{
    if(Mark >= 50)
        return enCheckPassing::Pass;
    else
        return enCheckPassing::Fail;
}


void PrintResult(float Mark)
{
    if(CheckPassing(Mark) == enCheckPassing::Pass)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}



int main()
{

    PrintResult( ReadMark() );
    

    return 0;
}