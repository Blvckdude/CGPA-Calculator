#ifndef CGPA_H_INCLUDED
#define CGPA_H_INCLUDED
using namespace std;

int level;
string semester;
void one(),two(),three(),four(),five();

void user_input()
{
    cout << "Enter your level '100, 200, 300, 400, 500' ";
    cin >> level; cout << endl;
    cout << "Enter your semester 'alpha, omega' ";
    cin >> semester; cout << endl;

    switch (level)
    {
        case 100:
            one();
            break;
        case 200:
            two();
            break;
        case 300:
            three();
            break;
        case 400:
            four();
            break;
        case 500:
            five();
            break;
    }

}

void one()
{
    if (semester == "alpha")
    {
        cout << "Your first semester GPA is still your CGPA ";
    }else if(semester == "omega")
    {
        double first,second,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        result = (first+second)/2;
        cout << "Your CGPA is " << result <<endl;
    }
}

void two()
{
    if (semester == "alpha")
    {
        cin clear();
        double first,second,third,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        result = (first+second+third)/3;
        cout << "Your CGPA is " << result <<endl;

    }else if(semester == "omega")
    {
        double first,second,third,fourth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        result = (first+second+third+fourth)/4;
        cout << "Your CGPA is " << result <<endl;
    }
}

void three()
{
    if (semester == "alpha")
    {
        double first,second,third,fourth,fifth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        result = (first+second+third+fourth+fifth)/5;
        cout << "Your CGPA is " << result <<endl;
    }else if(semester == "omega")
    {
        double first,second,third,fourth,fifth,sixth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        cout << "300 level omega semester GPA ";
        cin >> sixth;
        result = (first+second+third+fourth+fifth+sixth)/6;
        cout << "Your CGPA is " << result <<endl;
    }
}

void four()
{
    if (semester == "alpha")
    {
        double first,second,third,fourth,fifth,sixth,seventh,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        cout << "300 level omega semester GPA ";
        cin >> sixth;
        cout << "400 level alpha semester GPA ";
        cin >> seventh;
        result = (first+second+third+fourth+fifth+sixth+seventh)/7;
        cout << "Your CGPA is " << result <<endl;
    }else if(semester == "omega")
    {
        double first,second,third,fourth,fifth,sixth,seventh,eighth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        cout << "300 level omega semester GPA ";
        cin >> sixth;
        cout << "400 level alpha semester GPA ";
        cin >> seventh;
        cout << "400 level omega semester GPA ";
        cin >> eighth;
        result = (first+second+third+fourth+fifth+sixth+seventh+eighth)/8;
        cout << "Your CGPA is " << result <<endl;
    }
}

void five()
{
    if (semester == "alpha")
    {
        double first,second,third,fourth,fifth,sixth,seventh,eighth,ninth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        cout << "300 level omega semester GPA ";
        cin >> sixth;
        cout << "400 level alpha semester GPA ";
        cin >> seventh;
        cout << "400 level omega semester GPA ";
        cin >> eighth;
        cout << "500 level alpha semester GPA ";
        cin >> ninth;
        result = (first+second+third+fourth+fifth+sixth+seventh+eighth+ninth)/9;
        cout << "Your CGPA is " << result <<endl;
    }else if(semester == "omega")
    {
        double first,second,third,fourth,fifth,sixth,seventh,eighth,ninth,tenth,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        cout << "200 level omega semester GPA ";
        cin >> fourth;
        cout << "300 level alpha semester GPA ";
        cin >> fifth;
        cout << "300 level omega semester GPA ";
        cin >> sixth;
        cout << "400 level alpha semester GPA ";
        cin >> seventh;
        cout << "400 level omega semester GPA ";
        cin >> eighth;
        cout << "500 level alpha semester GPA ";
        cin >> ninth;
        cout << "500 level omega semester GPA ";
        cin >> tenth;
        result = (first+second+third+fourth+fifth+sixth+seventh+eighth+ninth+tenth)/10;
        cout << "Your CGPA is " << result <<endl;
    }
}

#endif // CGPA_H_INCLUDED
