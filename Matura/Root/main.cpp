#include <iostream>

using namespace std;

float Root(int _Num)
{
    for(int i = 1.0; i <= _Num ; i++)
    {
        if(i*i == _Num) return i;
    }
    return 0;
}

int main()
{
    int _Num;
    cin >> _Num;
    cout << Root(_Num);
    return 0;
}
