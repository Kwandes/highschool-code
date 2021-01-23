#include <iostream>

using namespace std;

int Fib(int _Num)
{
    if(_Num == 0) return 0;
    if(_Num == 1) return 1;
    else return Fib(_Num-1) + Fib(_Num-2);
}

int main()
{
    int _num;
    cin >> _num;
    cout << Fib(_num);
    return 0;
}
