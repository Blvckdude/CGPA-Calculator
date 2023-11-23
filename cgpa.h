#ifndef CGPA_H_INCLUDED
#define CGPA_H_INCLUDED
using namespace std;

int level;
int semester;
void one(),two(),three(),four(),five();
int level_check();

int level_check()
{
    cout << "Enter your level \n";
    cout << "[1] 100 Level\n";
    cout << "[2] 200 Level\n";
    cout << "[3] 300 Level\n";
    cout << "[4] 400 Level\n";
    cout << "[5] 500 Level\n";
    cin >> level; cout << endl;
    return level;
}

void CGPA()
{
    level = level_check();

    switch (level)
    {
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
        case 5:
            five();
            break;
        default:
            cout << "Invalid option\n";
            CGPA();
    }

}

void one()
{

    cout << "Enter your semester\n";
    cout << "[1] Alpha\n";
    cout << "[2] Omega\n";
    cin >> semester; cout << endl;
    if (semester == 1)
    {
        cout << "Your first semester GPA is still your CGPA ";
    }else if(semester == 2)
    {
        double first,second,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        result = (first+second)/2;
        cout << "Your CGPA is " << result <<endl;
    }
    else{
        cout << "Invalid input\n";
        one();
    }
}

void two()
{

    cout << "Enter your semester\n";
    cout << "[1] Alpha\n";
    cout << "[2] Omega\n";
    cin >> semester; cout << endl;
    if (semester == 1)
    {
        double first,second,third,result;
        cout << "100 level alpha semester GPA ";
        cin >> first;
        cout << "100 level omega semester GPA ";
        cin >> second;
        cout << "200 level alpha semester GPA ";
        cin >> third;
        result = (first+second+third)/3;
        cout << "Your CGPA is " << result <<endl;

    }else if(semester == 2)
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
    else{
        cout << "Invalid input\n";
        two();
    }
}

void three()
{

    cout << "Enter your semester\n";
    cout << "[1] Alpha\n";
    cout << "[2] Omega\n";
    cin >> semester; cout << endl;
    if (semester == 1)
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
    }else if(semester == 2)
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
    else{
        cout << "Invalid input\n";
        three();
    }
}

void four()
{

    cout << "Enter your semester\n";
    cout << "[1] Alpha\n";
    cout << "[2] Omega\n";
    cin >> semester; cout << endl;
    if (semester == 1)
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
    }else if(semester == 2)
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
    else{
        cout << "Invalid input\n";
        four();
    }
}

void five()
{

    cout << "Enter your semester\n";
    cout << "[1] Alpha\n";
    cout << "[2] Omega\n";
    cin >> semester; cout << endl;
    if (semester == 1)
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
    }else if(semester == 2)
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
    else{
        cout << "Invalid input\n";
        five();
    }
}

#endif // CGPA_H_INCLUDED
