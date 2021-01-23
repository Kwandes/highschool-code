#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    /*int a,b,x;
    a=3;
    b=10;
    x=99;
    a>b ? cout<<"a"<<endl : cout<<"b"<<endl ;
    */

    cout << "What would you like to do?" << endl;
    cout << "leave(x) Stay(s)" << endl;
    char input=getchar();
    (input=='x') ? cout << "goodbye" << endl : cout << "You wanted to stay";
    cout<<endl;

    cout << endl;
    cout << "2." << endl;
    double firstArray[4];
    double x,max=0,min=0;
    for(int i=0;i<=4;i++)
    {
        cin>>x;
        firstArray[i]=x;
        x>max ? max=x : max;
        x<min ? min=x : max;
    }
    cout<< "Max: " << max << endl << "Min: " << min << endl;

    cout << endl;
    cout << "3." << endl;
    srand (time(NULL));
    int Array[99];
    for(int i=0;i<=99;i++)
    {
        Array[i]=rand()%100;
        //cout<< "Array[" << i << "]: " << Array[i] << endl;
        cout << Array[i] << "  ";
    }
    cout << endl << endl;
    cout << "1." << endl;

    const int ArrayIndex=3;
    char CharArray[ArrayIndex]={'a','b','c'};
    int a,b,c;
    a= CharArray[0];
    b=CharArray[1];
    c=CharArray[2];
    cout<< a << " " << b << " " << c << " " << endl;




    return 0;
}
