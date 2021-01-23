#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int Size(int _Num)
{
    int _Size = 0;
    while(_Num != 0)
    {
        _Num/= 10;
        _Size++;
    }
    return _Size;
}

void Z2(int _Num)
{
    int _count = 0;
    vector<int> Z2;
    for(int i = 1; i <= _Num ; i++)
    {
        if(_Num%i == 0) Z2.push_back(i);
    }

    if(Z2.size() == 18)
    {
        cout << _Num << " : ";
        for(int i = 0; i < Z2.size() ; i++)
        {
            cout << Z2[i] << " ";
        }
        cout << endl;
    }
}

vector<int> Z3_a(int _Num)
{
    int _count = 0;
    vector<int> Z3a;
    for(int i = 1; i <= _Num ; i++)
    {
        if(_Num%i == 0) Z3a.push_back(i);
    }
    return Z3a;
}

int  Z3(vector<int> _Num)
{
    int _count = 0;
    vector<int> Z3_i;
    vector<int> Z3_j;
    int bigger;
    int _Max = -9999999;
    bool same = false;
    for(int i = 0; i < 1000 ; i++)
    {
        same = false;
        for(int j = 0; j < 1000 ; j++)
        {
            Z3_i = Z3_a(_Num[i]);
            Z3_j = Z3_a(_Num[j]);
            if(Z3_i.size() > Z3_j.size()) bigger = Z3_i.size();
            else bigger = Z3_j.size();
            for(int k = 1; k < bigger ; k++)
            {
                if(Z3_i[k] == Z3_j[k]) same = true;
            }
            if(same) cout << "---------------" << endl;
            if(!same)
            {
                int _Result = 1;
                for(int N = 0; N < Z3_i.size() ; N++)
                {
                    _Result *= Z3_i[N];
                }
                cout << "Result: " << _Result << endl;
                if(_Result > _Max)_Max = _Result;
            }
        }
    }
    return _Max;

}

int main()
{
    vector<int> Numbers;
    fstream file; file.open("liczby.txt");
    int _temp;
    int _Count = 0;
    while(!file.eof())
    {
        file >> _temp;
        Numbers.push_back(_temp);
    }
    vector<int> Z1;
    for(int i = 0; i < Numbers.size() ; i++)
    {
        if(Numbers[i] < 1000) Z1.push_back(Numbers[i]);

    }
    vector <int>::reverse_iterator it = Z1.rbegin();
    cout << "Z1: " << endl;
    cout << "Amount of numbers < 1000: " << _Count << endl;
    cout << "last 2 numbers : " << *it << " and " << *it++ << endl;
    cout << "------------------------------------------" << endl << endl;

    cout << "Z2: " << endl;
    for(int i = 0; i < Numbers.size() ; i++)
    {
        Z2(Numbers[i]);
    }
    cout << "------------------------------------------" << endl << endl;

    cout << "Z3: ";
    //for(int i = 0; i < Numbers.size() ; i++)
    //{
    //vector<int> Z3_result = Z3(Numbers);
    //int _Result = 1;
    //for(int i = 0; i< Z3_result.size() ; i++)
    //{
        //_Result *= Z3_result[i];
    //}
    cout << Z3(Numbers) << endl;
    //}

    return 0;
}
