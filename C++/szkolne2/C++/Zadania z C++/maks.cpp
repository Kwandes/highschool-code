#include <iostream>

using namespace std;

int main ()
{
    int n,a, mix=0, man=0;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>a;
             if (a>mix) mix=a;
        else if (a<man) man=a;
    }
    cout<<mix-man;

    return 0;
}
