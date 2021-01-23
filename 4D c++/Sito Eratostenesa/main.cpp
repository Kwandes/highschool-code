#include <iostream>

using namespace std;

void Foo(int Start,int End,&Arr)
{
    /*for int i=0 ; i< End; i++)
    {
        Stiko[i] = i;
    }
    cout << Arr[5];*/
}

int main()
{
    int Start, End;
    cin >> Start >> End;
    int Arr[++End];
    int *ArrayP;
    ArrayP = new int[++End];
    Foo(Start, End);
    return 0;
}
