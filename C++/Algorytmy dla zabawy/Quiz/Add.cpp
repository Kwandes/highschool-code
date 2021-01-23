#include <iostream>
#include "quiz.h"
#include <fstream>
using namespace std;

void Add::write()
{
    //ifstream previousquiz;
    //previousquiz.open("quiz.txt");
    ofstream question;
    question.open("quiz.txt", ios::app);
    //question << previousquiz << endl;
    //previousquiz.close();
    cout << "Insert the question:" << endl;
    string text;
    string a,b,c,d,right;
    getline(cin,text);
    question << "////////Question////////" << endl << text << endl;
    cout << "Insert Answer A: " << endl;
    getline(cin,a);
    question << "A:" << a << endl;
    cout << "Insert Answer B: " << endl;
    getline(cin,b);
    question << "B:" << b << endl;
    cout << "Insert Answer C: " << endl;
    getline(cin,c);
    question << "C:" << c << endl;
    cout << "Insert Answer D: " << endl;
    getline(cin,d);
    question << "D:" << d << endl;
    cout << "Proper answer: " << endl;
    getline(cin,right);
    question << "Proper answer: " <<right << endl;
    question.close();
}
Add::Add()
{
    cout << "creating new question..." << endl;
}
Add::~Add()
{
    cout << "cleaning up..." << endl;
}
