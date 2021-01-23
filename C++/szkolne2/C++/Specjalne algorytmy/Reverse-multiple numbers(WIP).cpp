#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>

using namespace std;
int main()
{
    int testamount;
    cout << "Welcome to 'Closest Palindrome' program" << endl ;
    cout << "Confirm numbers using ENTER" << endl ;
    cout << "How many numbers would you like to test: " ;
    cin >> testamount;
    cout << endl;
    long int Number[testamount],Sorted[testamount];
    for(int I=1; I<=testamount; I++)
    {

        long int Reverse[100];
        long int Donerev[100];
        long int Reversed;
        int Count=1,spin=10,maxcount=1;
        cout<<"Insert number: ";
        cin>>Number[I];
        if(Number[I]<10)
        {
            Sorted[I]=Number[I];
            goto singlenumber;
        }
        long int x;
        while(x!=Number[I])
        {
            Count=0;
            x=Number[I];
            Reverse[0]=x;
            for(; x>spin;)
            {
                x/=10;
                Reverse[maxcount]=x;
                Count++;
                if(maxcount<=Count)maxcount=Count+1;
            }
            if(Number[I]>spin)
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
            if(test[loop]==0 || test[loop]<=0 || test[loop]>Number[I] || test[loop]>test[loop-1] )
            {
                test[loop]=1;
            }
            maxcount--;
        }
        maxcount=countsave;
        Sorted[I]=0;
        loop=1;
        while(maxcount!=0)
        {

            Sorted[I]+=Donerev[loop]*test[loop];
            maxcount--;
            loop++;
        }

    }
    singlenumber:
    for(int I=1; I<=testamount; I++)
    {

        cout<<"Reversed Number: "<<Sorted[I]<<endl;
    }
    ///////////Numbers have been reversed(Sorted[I]//////////
    long int Palindrome[testamount];
    long int increaseNUM,increaseSOR,result;
    for(int I=1; I<=testamount; I++)
    {
        increaseNUM=Number[I];
        increaseSOR=Sorted[I];
        result=Number[I];
        while(Number[I]!=Sorted[I])
        {
            if(Number[I]==Sorted[I])Palindrome[I]=result;
            else
            {
                cout<<endl<<"increasing...  "<<result;
                Sleep(500);
                if(result>Sorted[I]){cout<<"SOR";increaseSOR++;result=increaseSOR;}
                if(result<Sorted[I]){cout<<"NUM";increaseNUM++;result=increaseNUM;}
            }
        }
        cout<<"Closest Plaindrome of "<<Number[I]<<": "<<Palindrome[I]<<endl;
    }


return 0;
}
