#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int bin2dec (string binarna)
{
    int dziesietna = strtol(binarna.c_str(), NULL, 8);

    return dziesietna;
}

int main()
{
    string liczba;

    //cout << "Podaj liczbe binarna:" << endl;
    //cin >> liczba;
    //cout << bin2dec(liczba) << endl;
    string Test = "24";
    int test =  strtol(Test.c_str(), NULL, 10);
    int _temp = test/2;
    cout << _temp << endl;
    char TEst[255];
    itoa(_temp,TEst, 10);
    cout << TEst[0] << TEst[1];
    Test[0] = TEst[0]; Test[1] = TEst[1];
    cout << Test;
    return 0;
}
