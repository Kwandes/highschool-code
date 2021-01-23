#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "header.h"

using namespace std;

int main()
{
bool EndProgram = false;
while(EndProgram == false)
    {
    FunctionMenu();
    FunctionList();
    ChangeTextColor(13);
    int ChooseOption;
    cin >> ChooseOption;
    ChangeTextColor(10);
    switch(ChooseOption)
    {
        case 1:
        {
            AdditionFunction();
            break;
        }
        case 2:
        {
            SubtractionFunction();
            break;
        }
        case 3:
        {
            MultiplicationFunction();
            break;
        }
        case 4:
        {
            DivinationFunction();
            break;
        }
        case 5:
        {
            PowerFunction();
            break;
        }
        case 6:
        {
            SqrtFunction();
            break;
        }
        case 7:
        {
            FactorialFunction();
            break;
        }
        case 8:
        {
            FibonacciFunction();
            break;
        }
        case 9:
        {
            GCDFunction();
            break;
        }
        case 0:
        {
            system("cls");
            ChangeTextColor(12);
            FuckYou();
            EndProgram = true;
            break;
        }
        default :
        {
            ChangeTextColor(12);;
            cout << "Invalid option" << endl;

            break;
        }
    }
    if(EndProgram == false) Sleep(4000);
    system("cls");
    ChangeTextColor(15);
    }
return 0;
}
/* url to spreadsheet : http://www.qtsoftware.de/bilder/qtConEx01ColorCodes.jpg
    color numbers:
    black - 0       dark yellow - 6 red - 12
    dark blue - 1   grey - 7        bright purple - 13
    dark green - 2  dark grey - 8   yellow - 14
    dark cyan - 3   blue - 9         white - 15
    dark red - 4    green - 10
    purple - 5      cyan - 11
	*/
