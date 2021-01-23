#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int n;
    cin>>n;
    start:
    if (i>=n) {cout<< "TAK"; return 0;}
    else if (n%i == 0) {cout<<"NIE"; return 0;}
    else {i++; goto start;}
    return 0;
}
