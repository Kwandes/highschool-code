#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 6;
    int p = 5;
    int S = 0;
    int A[n] = {15,12,10,6,5,1};
int maxpole = 0;
 for(int i = 1; i < n; ++i)
 {
 for(int j = i + 1; j <=n; ++j)
 {
 int pole = A[i] * A[j];
 if(pole % p != 0)
 {
 if(pole > maxpole)
maxpole = pole;
 }
 }
 }
 cout << maxpole;
    return 0;
}
