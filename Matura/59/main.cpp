#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>


using namespace std;



bool checkPrimal(int _Num)
{
    //cout << "for _Num : " << _Num << endl;
    vector<int> Primal;
    int _Count = 0;
    //if(size(_Num) < 3) return false;
    //cout << "checking primals " << endl;
    while(_Num > 2)
    {
        for(int i = 2 ; i < _Num ; i++)
        {

            Primal.push_back(_Num/i);
            _Num /= i;
            //cout << "test i: " << i << "_num: " << _Num << endl;
        }
    }
    //cout << "checking count " << endl;
    for(int i = 1 ; i < Primal.size() ; i++)
    {
        if(Primal[0] != Primal [i]) _Count ++;
    }
    //cout << "finished checking count" << endl;
    //if(_Count >= 3) cout << "Count is bigger than 3" << endl;
    if(_Count >= 3) return true;
    else return false;

}

void task_1(vector<int> _Num)
{
    int _Count = 0;
    for(int i = 0 ; i < _Num.size() ; i++)
    {
        if(checkPrimal(_Num[i])) _Count++;
        //if(checkPrimal(_Num[i])) cout << "count ++ : " << _Count << endl;
    }
    cout << "task 1: " <<  _Count << endl;
}
void test(int _Num)
{
    int _Count2 = 0;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(checkPrimal(_Num)) _Count2++;
        if(checkPrimal(_Num)) cout << "count ++ : " << _Count2 << endl;
    }
    cout << "task 1: " <<  _Count2 << endl;
}

int main()
{
    fstream file; file.open("liczby.txt");
    vector<int> Numbers;
    int _temp;
    while(!file.eof())
    {
        file >> _temp;
        Numbers.push_back(_temp);
    }
    test(3465);
    task_1(Numbers);
}


/*vector<int> firstNum(string _String)
{
    int _Num;
    istringstream(_String) >> _Num;
    vector<int> _firstNums;
    int _temp = _Num;
    for(int i = 2; i != _Num ; i++)
    {
        while(_temp%i == 0)
        {
            _firstNums.push_back(i);
            _temp /= i;
            //cout << _temp<< endl;
        }
    }
    return _firstNums;
}
bool checkZ1(vector<int> _Num)
{
    int _Count = 1;
    if(_Num.size() >=3)
    {
        for ( int i =0; i< _Num.size() ; i++)
        {
            for(int j = 1 ; j < _Num.size() ; j++)
            {
                if(_Num[0] != _Num[i]) _Count++;
            }
        }
        if(_Count >= 3) return true;
        else return false;
    }
    else return false;
}

int main()
{
    vector<int> z1;
    cout << "Hello world!" << endl;
    string test = "13150087";
    z1 = firstNum(test);
    for(int i = 0; i< z1.size(); i++)
    {
        cout << z1[i] << " ";
    }
    cout << endl << "////////" << endl;

    int _z1Count = 0;

    string _Word;
    fstream file; file.open("liczby.txt");
    while(!file.eof())
    {
        file >> _Word;
        z1 = firstNum(_Word);
        for(int i = 0; i< z1.size(); i++)
        {
            cout << z1[i] << " ";
        }
        cout << endl;
        if(checkZ1(z1)) _z1Count++;
        //cout << checkZ1(z1) << endl;
    }
    file.close();
    cout << _z1Count << endl;
    return 0;
}*/
