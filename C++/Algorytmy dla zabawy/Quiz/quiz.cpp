#include <iostream>
#include "quiz.h"
using namespace std;

void Menu::mainmenu()
{
    cout << "This is THE ULTIMATE QUIZ" << endl;
    cout << "What would you like to do?" << endl;
    cout << "S.Start the quiz" << endl;
    cout << "A.Add new questions" << endl;
    cout << "E.Exit" << endl;
    cout << "choose: ";
    char choice;
    cin >> choice;
    chosen = choice;
switch(choice)
    {
     case 's':
        {
            cout << "Started" << endl;
        }break;
    case 'a':
        {
            cout << "Added" << endl;
        }break;
    case 'e':
        {
            cout << "Exiting" << endl;
        }
    default:
        {
            cout << "wrong choice" <<endl;
        }break;
    }
}

Menu::Menu()
{
    cout << "Creating..." << endl;
}
Menu::~Menu()
{
    cout << "Cleaning..." << endl;
}
