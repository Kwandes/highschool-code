#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <math.h> //sqrt
#include "header.h"
using namespace std;



//functions

////////////ADDITION/////////////////////////////////////////
void Addition(float A, float B)
{
    ChangeTextColor(14);
    cout << A << " + " << B << " = " << A+B << endl;
    ChangeTextColor(10);
    cout << "Addition of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " and ";
    ChangeTextColor(14);
    cout << B;
    ChangeTextColor(10);
    cout << " complete. Result: ";
    ChangeTextColor(13);
    cout << A+B << endl;
}

void AdditionFunction()
{

    float A,B;
    cout << "Addition" << endl;
    cout << "Insert first number: ";
    cin >> A;
    cout << endl << "Insert second number: ";
    cin >> B;
    Addition(A,B);
}
//////////////////////////////////////////////////////////////
/////////////SUBSTRACTION/////////////////////////////////////
void Subtraction(float A, float B)
{
    ChangeTextColor(14);
    cout << A << " - " << B << " = " << A-B << endl;
    ChangeTextColor(10);
    cout << "Subtraction of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " and ";
    ChangeTextColor(14);
    cout << B;
    ChangeTextColor(10);
    cout << " complete. Result: ";
    ChangeTextColor(13);
    cout << A-B << endl;
}

void SubtractionFunction()
{

    float A,B;
    cout << "Subtracion" << endl;
    cout << "Insert first number: ";
    cin >> A;
    cout << endl << "Insert second number: ";
    cin >> B;
    Subtraction(A,B);
}
//////////////////////////////////////////////////////////////
/////////////Multiplication///////////////////////////////////
void Multiplication(float A, float B)
{
    ChangeTextColor(14);
    cout << A << " * " << B << " = " << A*B << endl;
    ChangeTextColor(10);
   ChangeTextColor(10);
    cout << "Multiplication of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " and ";
    ChangeTextColor(14);
    cout << B;
    ChangeTextColor(10);
    cout << " complete. Result: ";
    ChangeTextColor(13);
    cout << A*B << endl;
}

void MultiplicationFunction()
{

    float A,B;
    cout << "Multiplication" << endl;
    cout << "Insert first number: ";
    cin >> A;
    cout << endl << "Insert second number: ";
    cin >> B;
    Multiplication(A,B);
}
//////////////////////////////////////////////////////////////
/////////////Divide///////////////////////////////////////////
void Divination(float A, float B)
{
    ChangeTextColor(14);
    cout << A << " / " << B << " = " << A/B << endl;
    ChangeTextColor(10);
    ChangeTextColor(10);
    cout << "Divination of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " and ";
    ChangeTextColor(14);
    cout << B;
    ChangeTextColor(10);
    cout << " complete. Result: ";
    ChangeTextColor(13);
    cout << A/B << endl;
}

void DivinationFunction()
{

    float A,B;
    cout << "Divination" << endl;
    cout << "Insert first number: ";
    cin >> A;
    cout << endl << "Insert second number: ";
    cin >> B;
    Divination(A,B);
}
//////////////////////////////////////////////////////////////
/////////////Power////////////////////////////////////////////
void Power(float A, int B)
{
    float Result = A;
    for(int i=1;i<B;i++){Result*=A;}
    ChangeTextColor(14);
    cout << A << " ^ " << B << " = " << Result << endl;
    cout << A;
    ChangeTextColor(10);
    cout << " to ";
    ChangeTextColor(14);
    cout << B;
    ChangeTextColor(10);
    cout << " power calculation complete. Result: ";
    ChangeTextColor(13);
    cout << Result <<endl;

}

void PowerFunction()
{

    float A;
    int B;
    cout << "Power of A" << endl;
    cout << "Insert A: ";
    cin >> A;
    cout << endl << "Insert to what Power: ";
    cin >> B;
    if(B <=0)
    {
        ChangeTextColor(12);
        cout << "Wrong Power, it can't be smaller or equal 0!" << endl;
    }
    else Power(A,B);
}
//////////////////////////////////////////////////////////////
/////////////Square Root//////////////////////////////////////
void Sqrt(float A)
{
    float Result;
    Result = sqrt(A);
    cout <<"Square Root of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " is ";
    ChangeTextColor(13);
    cout << Result <<endl;
}

void SqrtFunction()
{

    float A;
    cout <<"Square Root of A" << endl;
    cout << "Insert A: ";
    cin >> A;
    if(A <=0)
    {
        ChangeTextColor(12);
        cout << "Wrong Number, it can't be smaller or equal 0!" << endl;
    }
    else Sqrt(A);
}
//////////////////////////////////////////////////////////////
/////////////Factorial////////////////////////////////////////
void Factorial(int A)
{
    int n =0;
    long long Result=1;
    ChangeTextColor(14);
    cout << 1 << "! = " << 1 << endl;
    for(int i=2;i<=A;i++)
    {
        Result=Result*i;
		cout << i << "! = " << i-1 << "! * " << i << " = " << Result << endl;
	}
    ChangeTextColor(10);
    cout <<"Factorial of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " is ";
    ChangeTextColor(13);
    cout << Result << endl;
    Sleep(4000);
}

void FactorialFunction()
{

    int A;
    cout<<"Factorial of A" << endl;
    cout << "Insert A: ";
    cin >> A;
    if(A <=0)
    {
        ChangeTextColor(12);
        cout << "Wrong Number, it can't be smaller or equal 0!" << endl;
    }
    else Factorial(A);
}
//////////////////////////////////////////////////////////////
/////////////Fibonacci////////////////////////////////////////
void Fibonacci(int A)
{
    long long f1=1, f2=1, f3=1;
    ChangeTextColor(14);
    cout << "f3=f1+f2" << endl;
    cout << "f1=f2" << endl;
    cout << "f2=f3" << endl << endl;
    for(int i=2;i<A;i++){
        cout << "Iteration number " << i << endl;
		cout << f3 << " = " << f1 << " + " << f2 << endl;
		f3=f1+f2;
		cout << f1 << " = " << f2 << endl;
		f1=f2;
		cout << f2 << " = " << f3 << endl;
		f2=f3;
		cout << endl;
		Sleep(100);

	}
    ChangeTextColor(10);
    cout << endl << "Fibonacci of ";
    ChangeTextColor(14);
    cout << A;
    ChangeTextColor(10);
    cout << " is ";
    ChangeTextColor(13);
    cout << f3 << endl;
    Sleep(8000);
}

void FibonacciFunction()
{

    int A;
    cout <<"Fibonacci of A" << endl;
    cout << "Insert A(only integer): ";
    cin >> A;
    if(A <=0)
    {
        ChangeTextColor(12);
        cout << "Wrong Number, it can't be smaller or equal 0!" << endl;
    }
    else Fibonacci(A);
}
//////////////////////////////////////////////////////////////
/////////////Greatest Common Divider//////////////////////////
void GCD(int A,int B)
{
    ChangeTextColor(14);
    unsigned OriginalA = A, OriginalB = B;
    while(A != B)
    {
        if(A > B)
        {
            cout << endl << "A > B" << endl;
            cout << A << " -= " << B << endl;
            cout << "A = " << A << "  B = " << B << endl;
            A -= B;
        }
        else
        {
            cout << endl << "B > A" << endl;
            cout << B << " -= " << A << endl;
            B -= A;
            cout << "A = " << A << "  B = " << B << endl;
        }
    if (A < 200 || B < 200) Sleep(750);
    else Sleep (50);
    }
    ChangeTextColor(10);
    cout << endl << "Greatest Common Divider of ";
    ChangeTextColor(14);
    cout << OriginalA;
    ChangeTextColor(10);
    cout << " and ";
    ChangeTextColor(14);
    cout << OriginalB;
    ChangeTextColor(10);
    cout << " is ";
    ChangeTextColor(13);
    cout << A << endl;
    Sleep(4000);
}

void GCDFunction()
{

    int A;
    int B;
    cout <<"Greatest Common Divider of A and B" << endl;
    cout << "Insert A: ";
    cin >> A;
    cout << "Insert B: ";
    cin >> B;
    if (A < 0)
    {
        ChangeTextColor(12);
        cout << "A is smaller than 0 , changed to positive number" << endl;
        A *= -1;
    }
    if (B < 0)
    {
        ChangeTextColor(12);
        cout << "B is smaller than 0 , changed to positive number" << endl;
        B *= -1;
    }
    Sleep(4000);
    if(A ==0 || B == 0)
    {
        ChangeTextColor(12);
        cout << "Wrong Number, it can't be equal 0!" << endl;
    }
    else GCD(A,B);
}

//////////////////////////////////////////////////////////////
