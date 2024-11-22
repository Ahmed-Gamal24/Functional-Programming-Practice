//-----------Required-----------------------------------------------
// calculate Triangle Area Through Height (h) and Base Length (a) 
// the used equation -->  Area = a * sqrt( d*d - a*a )
//------------------------------------------------------------------


#include <iostream>
using namespace std;


void ReadDimentions(float &Height, float &BaseLength){

    cout << "Enter Triangle Height: " ;
    cin >> Height;

    cout << "Enter Triangle BaseLength: ";
    cin >> BaseLength;
}

float CalcTriangleAreaByHeightAndBaseLength(float Height, float BaseLength){
    float Area = 0.5 * Height * BaseLength ;
    return Area;
}

void PrintArea(float Area){
    cout << "Triangle Area = " << Area << endl;
}


int main()  
{
    float D, A;
    ReadDimentions(D, A);
    PrintArea( CalcTriangleAreaByHeightAndBaseLength(D, A) );

    return 0;
}