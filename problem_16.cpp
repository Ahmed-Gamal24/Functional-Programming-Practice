//-----------Required-----------------------------------------------
// calculate Rectangle Area Through diagonal (d) and Side Length (a) 
// the used equation -->  Area = a * sqrt( d*d - a*a )
//------------------------------------------------------------------


#include <iostream>
#include <cmath> // to use sqrt and pow functions
using namespace std;


void ReadDimentions(float &Diagonal, float &SideLength){

    cout << "Enter Length Of Diagonal: " ;
    cin >> Diagonal;

    cout << "Enter Length Of Side: ";
    cin >> SideLength;
}

float CalcRectangleAreaByDiagonalAndSideLength(float Diagonal, float SideLength){
    float Area = SideLength * sqrt( pow(Diagonal, 2) -  pow(SideLength, 2) );
    return Area;
}

void PrintArea(float Area){
    cout << "Reactangle Area = " << Area << endl;
}


int main()  
{
    float D, A;
    ReadDimentions(D, A);
    PrintArea( CalcRectangleAreaByDiagonalAndSideLength(D, A) );

    return 0;
}