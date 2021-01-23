#include <iostream>
#include <vector>
using namespace std;

vector<int> Sort(int Arr[10])
{
    bool Sorted = false;
    vector<int> V(Arr,Arr+10);
    while(!Sorted)
    {
        Sorted = true;
        for(int i = 0 ; i < V.size()-1 ; i++)
        {
            if(V[i] < V[i+1])
            {
                swap(V[i],V[i+1]);
                Sorted = false;
            }
        }
    }
    return V;
}

int main()
{
    int Arr[10] = {1,6,8,3,2,6,3,9,0,23};
    //int Arr2[10] = Sort(Arr);
    vector<int> V = Sort(Arr);
    vector<int>::iterator it;
    for(it = V.begin(); it != V.end(); it++ )
    {
            cout << *it << " ";
    }
    //Sort(Arr);
    return 0;
}
