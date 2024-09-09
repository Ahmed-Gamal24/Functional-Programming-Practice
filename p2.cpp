// Required: read the name and print it

#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string name;
    cout << "Please Enter Your Name: ";
    getline(cin, name);
    return name;
}

void PrintName(string name)
{
    cout << "Your Name is: " << name << endl;
}

int main()
{

    PrintName(ReadName());

    return 0;
}