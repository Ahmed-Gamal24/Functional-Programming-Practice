//-----------Required-----------------------------------------------
// calculate Circle Area described around an arbitrary triangle (Triangle Dimentions --> a, b, c)
// the used equation -->  Area =  M_PI * ( pow( (a * b * c) / ( 4 * sqrt( p * (p - a) * (p - b) * (p - c) ) ) , 2) )
//                         p = (a + b + c) / 2
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


void ReadTriangleDimentions(float &a, float &b, float &c){
    
    cout << "Enter a: " ;
    cin >> a;
 
    cout << "Enter b: " ;
    cin >> b;

    cout << "Enter c: " ;
    cin >> c;
}

float CalcCircleAreadescribedAroundArbitraryTriangle(float a, float b, float c){
    float p = (a + b + c) / 2;
    float Area = M_PI * ( pow( (a * b * c) / ( 4 * sqrt( p * (p - a) * (p - b) * (p - c) ) ) , 2) );
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    float a, b, c;
    ReadTriangleDimentions(a, b, c);
    PrintArea(CalcCircleAreadescribedAroundArbitraryTriangle(a, b, c));


    return 0;
}