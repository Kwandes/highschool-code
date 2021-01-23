#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "header.h"
using namespace std;

void ChangeTextColor(int color)
{   SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), color );    }

void FunctionMenu()
{
    ChangeTextColor(11);
    cout << "------------------------------------------------------------------" << endl;
    cout << "-----------------Welcome to Function choosing screen--------------" << endl;
    cout << "------------------------Choose the function-----------------------" << endl;
    cout << "------------------------------------------------------------------" << endl;
}

void FunctionList()
{
    ChangeTextColor(10);
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Divination" << endl;
    cout << "5.Power" << endl;
    cout << "6.Square root" << endl;
    cout << "7.Factorial" << endl;
    cout << "8.Fibonacci" << endl;
    cout << "9.Greatest Common Divider" << endl;
    cout << "0.Exit" << endl;
}

void FuckYou()
{
    for(int i=5;i>=0;i--)
        {
            ChangeTextColor(i+9);
            cout << endl << endl;
            cout << "                $$$$$" << endl;
            cout << "               $$____$$" << endl;
            cout << "               $$____$$" << endl;
            cout << "               $$____$$" << endl;
            cout << "               $$____$$" << endl;
            cout << "               $$____$$" << endl;
            cout << "          $$$$$$____$$$$$$" << endl;
            cout << "        $$____$$____$$____$$$$" << endl;
            cout << "        $$____$$____$$____$$__$$" << endl;
            cout << "$$$$$$$  $$____$$____$$____$$___$$" << endl;
            cout << "$$____$$$$________________$$____$$" << endl;
            cout << "$$______$$______________________$$" << endl;
            cout << "  $$____$$______________________$$" << endl;
            cout << "   $$$__$$______________________$$" << endl;
            cout << "    $$_________";
            ChangeTextColor(i+8);
            cout << "Goodbye";
            ChangeTextColor(i+9);
            cout << "__________$$" << endl;
            cout << "     $$$________________________$$" << endl;
            cout << "      $$______________________$$$" << endl;
            cout << "       $$$____________________$$" << endl;
            cout << "        $$____________________$$" << endl;
            cout << "         $$$________________$$$" << endl;
            cout << "          $$________________$$" << endl;
            cout << "          $$$$$$$$$$$$$$$$$$$$" << endl;

            Sleep(1000);
            system("cls");
        }
}
