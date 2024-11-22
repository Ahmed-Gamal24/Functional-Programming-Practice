//-----------Required-----------------------------------------------
// calculate Circle Area Inscribed in a square (circle inside square) through square area (A)
// the used equation -->  Area = ( pi * pow(A,2) ) / 4
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


float ReadSquareArea(){
    float SquareArea;
    cout << "Enter Square Area (A): " ;
    cin >> SquareArea;

    return SquareArea;
}

float CalcCircleAreaInscribedInSquare(float SquareArea){
    float Area = ( M_PI * pow(SquareArea, 2) ) / 4;
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    PrintArea( CalcCircleAreaInscribedInSquare( ReadSquareArea() ));

    return 0;
}