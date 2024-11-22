//-----------Required-----------------------------------------------
// calculate Circle Area along the circumference (l)
// the used equation -->  Area =  pow(l, 2) / 4* M_pi
//------------------------------------------------------------------


#include <iostream>

#define _USE_MATH_DEFINES // to use PI Constant
#include <cmath>

#include <math.h>
using namespace std;


float Readcircumference(){
    float circumference;
    cout << "Enter circumference (L): " ;
    cin >> circumference;

    return circumference;
}

float CalcCircleAreaThroughcircumference(float circumference){
    float Area = (pow(circumference, 2)) / (4 * M_PI);
    return Area;
}

void PrintArea(float Area){
    cout << "Circle Area = " << Area << endl;
}


int main()  
{

    
    PrintArea( CalcCircleAreaThroughcircumference( Readcircumference() ));

    return 0;
}