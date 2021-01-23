#include <iostream>
#include <string>

using namespace std;
int TabA[126], TabB[126];
bool CheckTabs();
bool CheckAnagram(std::string WordA,std::string WordB)
{
     if (WordA.size() != WordB.size()) return false;

     for(int j = 0; j < WordB.size(); j++)
     for(int i = 0; i <=125 ;i++)
     {
        if (WordA[j] == i) {TabA[i]++; /*cout << "WordA for i: " << i << endl;*/}
     }

     for(int j = 0; j < WordB.size(); j++)
     for(int i = 0; i <=125 ;i++)
     {
        if (WordB[j] == i) {TabB[i]++; /*cout << "WordB for i: " << i << endl;*/}
     }

     if(CheckTabs()) return true;
     else return false;
}

bool CheckTabs()
{
    for(int i = 0; i < 126 ; i++)
    {
        if ( TabA[i] != TabB[i] ) return false;
    }
    return true;
}



int main()
{
    string Aword, Bword;
    cin >> Aword >> Bword;
    if (CheckAnagram(Aword, Bword)) cout << "True";
    else cout << "False";
    //cout << CheckAnagram(Aword, Bword) << endl;




    /*char Char;
    for (int i = 65; i<=90 ;i++)
    {
        Char = i;
        cout << Char << ".";
    }
    cout << endl;
    for (int i = 97; i<=122 ;i++)
    {
        Char = i;
        cout << Char << ".";
    }
    return 0;*/
}

