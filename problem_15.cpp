//-----------Required------------------------
// calculate Rectangle Area 
//--------------------------------------------


#include <iostream>
using namespace std;


void ReadDimentions(float &Width, float &Height){

    cout << "Enter Reactangle Width: " ;
    cin >> Width;

    cout << "Enter Rectangle Height: ";
    cin >> Height;
}

float CalcRectangleAreaByWidthAndHeight(float Width, float Height){
    float Area = Width * Height;
    return Area;
}

void PrintArea(float Area){
    cout << "Reactangle Area = " << Area << endl;
}


int main()  
{
    float W, H;
    ReadDimentions(W, H);
    PrintArea( CalcRectangleAreaByWidthAndHeight(W, H) );


    return 0;
}