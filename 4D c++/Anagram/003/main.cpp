#include <iostream>
#include <string>
using namespace std;

//bool CheckAnagram(std::string WordA,std::string WordB)
/*{
     if (WordA.size() != WordB.size()) return false;
     int WordsA[25], WordsB[25];
     int Counter = 0;
     for(int j = WordA.Size(); i > 0; i--)
     for(int i = 97; i <=122 ;i++)
     {
         std::cout << WordA[Counter] << endl;
         if (WordA[Counter] == i) {WordsA[Counter]++; std::cout << "incrementing WordA for i = " << i << endl;}
         if (WordB[Counter] == i) {WordsB[Counter]++; std::cout << "incrementing WordB for i = " << i << endl;}

     }

}*/

int main()
{
    //std::cout << CheckAnagram("Abcsawda","Bsjhjsak");
    char Char;
    for (int i =65; i <= 90; i++)
    {
        Char = i;
        cout << Char << ".";
    }
    cout << endl;
    for (int i =97; i <=122; i++)
    {
        Char = i;
        cout << Char << ".";
    }
    return 0;
}
