#include <iostream>
#include "cgpa.h"

using namespace std;

void check()
{
    int option;
    void check();
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
            cout << "Still under construction\n";
            break;
        default:
            cout << "Invalid option\n";
            check();
    }
}

int main()
{

    check();

    return 0;
}
