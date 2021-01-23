#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    int Reverse[100];
    int Donerev[100];
    int Number,Count=1,spin=10,maxcount=1,Reversed;
    cout<<"Insert number: ";
    cin>>Number;
    cout<<endl;
    int x;
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

       // cout<</*"smallest is: "<<x<<endl<<*///"total is: "<<Count+1<<endl;
        if(Number>spin)
        {
            spin*=10;
        }
        //cout<<"spin: "<<spin<<endl;

    }
    //cout<<Reverse[maxcount]<<endl;
    int i=0;
    //cout<<"/////////////////////////////////////////////"<<endl;
   // cout<<"maxcount: "<<maxcount<<endl;;
    while (maxcount>i)
    {
    //    cout<<"reversed " <<i<<": "<<Reverse[i]<<endl;
        i++;
    }
    //cout<<"/////////////////////////////////////////////"<<endl;
    Reversed=Reverse[0];
    //cout<<endl<<"maxcount: "<<maxcount<<endl<<"Oryginal Number: "<<Reversed<<endl<<endl;
    int n=1,m=0,bufor,Max=maxcount;
    while(maxcount>=n)
    {
    //    cout<<"///////////////////BUFORING///////////////////////"<<endl;
    //    cout<<"bufor = "<<Reverse[m]<<" - "<<Reverse[n]*10<<endl;
        if(Reverse[n]*10>Reverse[m]*100 || Reverse[n]<0)
        {
            bufor=Reverse[m];
   //         cout<<"Smallest number FOUND!"<<endl;
   //         cout<<"Bufor = "<<bufor<<endl;
        }
        else
        {
            bufor=Reverse[m]-Reverse[n]*10;
    //        cout<<"Bufor = "<<bufor<<endl;
        }
        Donerev[n]=bufor;
    //    cout<<"done and n: "<<Donerev[n]<<" "<<n<<endl;
        n++;
        m++;
    }
    //cout<<"///////////////BUFORING FINISHED//////////////////"<<endl;
    //cout<<endl<<"End this bullshit, please"<<endl;
    //Sleep(500);
    //system("cls");
    int ReversedNumber=0;
    int tens[10];
   // cout<<Number<<endl<<maxcount*(10*10*10*10*10)<<endl;
   // cout<<(maxcount-1)*(10*10*10*10)<<endl;
    int countsave=maxcount;
    int loops=1;
    int loop=0;
    int test[100];
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
            /*cout<<"ERROR "<<test[loop]<<endl;*/test[loop]=1;
        }
    //    cout<<"test n: "<<test[loop]<<endl;
        maxcount--;
    }
    maxcount=countsave;
    int Sorted=0;
    loop=1;
    //cout<<maxcount<<endl;
    while(maxcount!=0)
    {
    //    cout<<"test maxcount "<<loop<<": "<<maxcount<<endl;
    //    cout<<"test Test "<<loop<<": "<<test[loop]<<endl;
        Sorted+=Donerev[loop]*test[loop];
        maxcount--;
        loop++;
    }
   // cout<<"Original Number: "<<Number<<endl;
    cout<<"Reversed Number: "<<Sorted<<endl;
    return 0;
}

