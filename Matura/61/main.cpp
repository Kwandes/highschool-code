#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int isAryth(vector<int> String)
{
    int r = String[1] - String[0];
    for(int i = 0 ; i < String.size()-1 ; i++)
    {
        if((String[i] + r) != String[i+1]) return false;
    }
    return r;
}

int checkZ2(vector<int> String)
{
    int _Num;
    int _Result = -9999;
    for(int i = 0 ; i < String.size() ; i++)
    {
        _Num = String[i];
        for(int x = 1; x <= 100 ; x++)
        {
            if((x*x*x) == _Num)
            {
                if(_Num > _Result) _Result = _Num;
            }
        }
    }
    if(_Result > 0) return _Result;
    return false;

}

int findR(vector<int> String)
{
    int r1 = String[1] - String[0];
    int r2;
    if((String[0] + (2*r1)) != String[2])
    {
        r2 = String[4] - String[3];
        if((String[2] +2*r2) == String[4]) return r2;
    }
    return r1;
}

void Z3(vector<int> String)
{
    int r = findR(String);
    for(int i = 0; i < String.size(); i++)
    {
        if(String[i] + r != String[i+1])
        {
            if(String[i+1] + r != String[i+2])
            {
                if(String[i+1]== 0) cout << String[0] << endl;
                else cout << String[i+1] << endl;

                goto finish;
            }
        }

    }
    finish:
    cout << endl;
    //cout << "r: " << r << endl;
}

int main()
{
    vector<int> String;
    int _temp;
    int _Max = -9999;
    int _Count = 0;
    int j = 5;
    int _size;
    vector<int> Max;
    fstream file;
    file.open("ciagi.txt");
    while(!file.eof())
    {
        file >> _size;
        for(int i = 0 ; i < _size ; i++)
        {
            file >> _temp;
            String.push_back(_temp);
        }
        if(isAryth(String) != 0 )
        {
            _temp = isAryth(String);
            _Count++;
            if(_temp > _Max)
            {
                _Max = _temp;
                Max = String;
            }
        }
        String.clear();
        j--;
    }
    file.close();

    cout << "_Max: " << _Max << endl;
    cout << "Count: " << _Count << endl;
    cout << "------------------------------------------" << endl;

    cout << "Z2: " << endl;

    vector<int> Z2;
    file.open("ciagi.txt");
    while(!file.eof())
    {
        file >> _size;
        for(int i = 0 ; i < _size ; i++)
        {
            file >> _temp;
            String.push_back(_temp);
        }
        if(checkZ2(String))
        {
            Z2.push_back(checkZ2(String));
        }
        String.clear();
    }
    vector<int>::iterator it = Z2.begin();
    for(; it < Z2.end() ; it++)
    {
        cout << *it << " " << endl;
    }
    file.close();
    cout << "------------------------------------------" << endl;

    file.open("bledne.txt");
    while(!file.eof())
    {
        file >> _size;
        for(int i = 0 ; i < _size ; i++)
        {
            file >> _temp;
            String.push_back(_temp);
        }
        Z3(String);
        String.clear();
    }


    return 0;
}
