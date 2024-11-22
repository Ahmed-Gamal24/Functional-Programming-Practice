//-----------Required-----------------------------------------------
// calculate Circle Area through Radius
// the used equation -->  Area = pi * r*r
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


float ReadRadius(){
    float Radius;
    cout << "Enter Radius (r): " ;
    cin >> Radius;

    return Radius;
}

float CalcCircleAreaThroughRadius(float Radius){
    float Area = M_PI * pow(Radius, 2);
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    PrintArea( CalcCircleAreaThroughRadius( ReadRadius() ));

    return 0;
}