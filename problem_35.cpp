//--------------Required------------------------------
// Read pennies, nickels, dimes, quarters, dollars
// then calculate the total pennies and total dollars
// penny = 1
// nickels = 5 penny
// dimes = 10 penny
// quarters = 25 penny
// dollar = 100 penny
//-----------------------------------------------------

#include <iostream>
using namespace std;


struct StPiggyPangContent{
    float pennies, nickels, dimes, quarters, dollars;
};

StPiggyPangContent ReadPenniesNickelsDimesQuartersAndDollars(){
    StPiggyPangContent PiggyPangContent;
    cout << "Enter Pennies Number: ";
    cin >> PiggyPangContent.pennies;
    cout << "Enter nickels Number: ";
    cin >> PiggyPangContent.nickels;
    cout << "Enter dimes Number: ";
    cin >> PiggyPangContent.dimes;
    cout << "Enter quarters Number: ";
    cin >> PiggyPangContent.quarters;
    cout << "Enter dollars Number: ";
    cin >> PiggyPangContent.dollars;

    return PiggyPangContent;
}

float CalcTotalPennies(StPiggyPangContent PiggyPangContent){
    float TotalPennies = PiggyPangContent.pennies + PiggyPangContent.nickels*5 + PiggyPangContent.dimes*10 + PiggyPangContent.quarters*25 + PiggyPangContent.dollars*100;

    return TotalPennies;
}

void PrintPenniesAndDollars(float Pennies){
    cout << "Total Pennies = " << Pennies << endl;
    cout << "Total Dollars = " << Pennies/100 << endl;
}



int main(){

    PrintPenniesAndDollars( CalcTotalPennies( ReadPenniesNickelsDimesQuartersAndDollars() ));


    return 0;
}