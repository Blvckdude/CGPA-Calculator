#include <iostream>
#include "cgpa.h"

using namespace std;

int main()
{
    int option;
    cout << "Please select Your service\n"<<endl;
    cout << "[1] CGPA calculator \n";
    cout << "[2] GPA calculator\n";
    cin >> option;

    switch(option)
    {
        case 1:
            CGPA();
            break;
        case 2:
            cout << "Still under construction";
            break;
        default:
            cout << "Invalid option";
    }

    return 0;
}
