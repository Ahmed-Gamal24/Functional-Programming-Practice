//-----------Required-----------------------------------------------
// calculate Circle Area Inscribed in an Isosceles Triangle (Suppose Triangle --> a,a,b)
// the used equation -->  Area =  M_PI * ( pow(b,2) / 4 ) * ( (2*a - b) / (2*a + b) )
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


void ReadTriangleDimentions(float &a, float &b){
    
    cout << "Enter a: " ;
    cin >> a;
 
    cout << "Enter b: " ;
    cin >> b;
}

float CalcCircleAreaInscribedInIsoscelesTriangle(float a, float b){
    float Area = M_PI * ( pow(b,2) / 4 ) * ( (2*a - b) / (2*a + b) );
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    float a, b;
    ReadTriangleDimentions(a, b);
    PrintArea(CalcCircleAreaInscribedInIsoscelesTriangle(a, b));


    return 0;
}