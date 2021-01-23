#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{   srand(time(NULL));
    int count=1,random=rand()%50+1;
    long long COUNT=0;
    for(;;){COUNT++;
        cout<<"*";
        for(int i=0;i<count;i++){
            cout <<" . ";
            cout<<"*";
            cout <<" ~ ";
        }
        cout<<"*";count++;
        for(int i=0;i<count;i=i+3){
            cout <<"!";
            cout<<"*";
            cout <<" ~ ";
            cout <<" . ";
        }
        cout<<"*";count++;
        for(int i=0;i<random;i=i+3){
            cout <<" ~ ";
            cout<<"*";
            cout <<" . ";
        }
        count++;
        Sleep(5);
        if(count==5)count=1;
    ofstream save;save.open("WTF.txt");
    save<<COUNT;
    save.close();
    }
    return 0;
}
