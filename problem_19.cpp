//-----------Required-----------------------------------------------
// calculate Circle Area through Diameter
// the used equation -->  Area = (pi * d*d) / 4
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


float ReadDiameter(){
    float Diameter;
    cout << "Enter Diameter (D): " ;
    cin >> Diameter;

    return Diameter;
}

float CalcCircleAreaThroughDiameter(float Diameter){
    float Area = ( M_PI * pow(Diameter, 2) ) / 4;
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    PrintArea( CalcCircleAreaThroughDiameter( ReadDiameter() ));

    return 0;
}