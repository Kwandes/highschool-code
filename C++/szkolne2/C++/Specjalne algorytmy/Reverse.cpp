#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    long int Reverse[100];
    long int Donerev[100];
    long int Number,Reversed;
    int Count=1,spin=10,maxcount=1;
    cout<<"Insert number: ";
    cin>>Number;
    long int x;
    while(x!=Number)
    {
        Count=0;
        x=Number;
        Reverse[0]=x;
        for(; x>spin;)
        {
            x/=10;
            Reverse[maxcount]=x;
            Count++;
            if(maxcount<=Count)maxcount=Count+1;
        }
        if(Number>spin)
        {
            spin*=10;
        }
    }
    int i=0;
    while (maxcount>i)
    {
        i++;
    }
    Reversed=Reverse[0];
    int n=1,m=0,bufor,Max=maxcount;
    while(maxcount>=n)
    {
        if(Reverse[n]*10>Reverse[m]*100 || Reverse[n]<0)
        {
            bufor=Reverse[m];
        }
        else
        {
            bufor=Reverse[m]-Reverse[n]*10;
        }
        Donerev[n]=bufor;
        n++;
        m++;
    }
    long int ReversedNumber=0;
    long int tens[10];
    int countsave=maxcount;
    int loops=1;
    int loop=0;
    long int test[100];
    while(maxcount!=0)
    {
        loop++;
        loops=1;
        Max=maxcount;
        while(Max-1!=0)
        {
            loops*=10;
            test[loop]=loops;
            Max--;
        }
        if(test[loop]==0 || test[loop]<=0 || test[loop]>Number || test[loop]>test[loop-1] )
        {
            test[loop]=1;
        }
        maxcount--;
    }
    maxcount=countsave;
    long int Sorted=0;
    loop=1;
    while(maxcount!=0)
    {

        Sorted+=Donerev[loop]*test[loop];
        maxcount--;
        loop++;
    }
    cout<<"Reversed Number: "<<Sorted<<endl;
    return 0;
}

