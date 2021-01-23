#include <iostream>

using namespace std;

int main()
{
    int Number=20,test,Asigned;
    int *p;
    p=&Number;
    cout<<"Number: "<<Number<<endl;
    cout<<"Numbers address: "<<p<<endl;
    cout<<"Pointer: "<<*p<<endl;
    Asigned=*p;
    cout<<"Asigned: "<<Asigned<<endl;
    Asigned=*p+5;
    cout<<"Asigned + 5: "<<Asigned<<endl;
    ////second set///
    int *p2,Number2=99;
    p2=p;
    cout<<"p2 looks at Number: "<<*p2<<endl;
    p=&Number2;
    cout<<"p looks at Number2: "<<*p<<endl;
    //*p=666;
    cout<<"p changes number to 666: "<<*p<<endl;
    cout<<"////////ARRAYS//////////"<<endl;
    int *pointer;
    int Array[10];
    pointer=Array;
    Array[0]=3;
    Array[1]=9;
    //Array[6]=69;
    cout<<"Array[0]=3: "<<*pointer<<endl;
    pointer++;
    cout<<"Array[1]=9: "<<*pointer<<endl;
    *(pointer+2)=69;
    cout<<"Array[3]=69: "<<Array[3]<<endl;
    cout<<"/////////Pointer to Pointer////////"<<endl;
    int *Pointer,*Pointer2,Num1=10,Num2;
    Pointer=&Num1;
    Pointer2=Pointer;
    cout<<"Pointer2: "<<*Pointer2<<endl;
    cout<<"//////////Incremenation////////"<<endl;
    int *POINTER,NUM=10;
    POINTER=&NUM;
    cout<<"base: "<<*POINTER<<endl;

    *(POINTER)++;
    cout<<"*(POINTER)++: "<<NUM<<" "<<*POINTER<<endl;
    *POINTER++;
    cout<<"*POINTER++: "<<*POINTER<<endl;
    return 0;
}
