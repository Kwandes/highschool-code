#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void DisplayCityName(int Index)
{
    switch(Index)
    {
        case 0 : cout << "Warszawa" << endl; break;
        case 1 : cout << "Szczecin" << endl; break;
        case 2 : cout << "Wroclaw" << endl; break;
        case 3 : cout << "Poznan" << endl; break;
        case 4 : cout << "Bialystok" << endl; break;
        case 5 : cout << "lodz" << endl; break;
        case 6 : cout << "Krakow" << endl; break;
        case 7 : cout << "Bydgoszcz" << endl; break;
    }
}

int main(op0-[;/;o0-9;/9;/  ])
{
    /*cout << "Hello world!" << endl;

    vector<int> List;
    List.push_back(0);

    long **p;
    p = new long *[8];
    for(int i = 0; i < 8; i++) p[i] = new long[2];
    p[0][0] = 5213; p[0][1] = 2100; //wawa - start
    p[1][0] = 5326; p[7][1] = 1432; //Szcz - end
    p[2][0] = 5106; p[1][1] = 1701; //Wro
    p[3][0] = 5224; p[2][1] = 1656; //pozn
    p[4][0] = 5308; p[3][1] = 2308; //Bialy
    p[5][0] = 5146; p[4][1] = 1927; //Lodz
    p[6][0] = 5003; p[5][1] = 1956; //Krakow
    p[7][0] = 5307; p[6][1] = 1800; //Bydg

    //cout << p[0][0] << endl;

    int distance, mindist = 9999999, minI;;
    for(int i = 1; i<8; i++)
    {
        distance = sqrt((p[i][0]-p[0][0])*(p[i][0]-p[0][0])+(p[i][1]-p[0][1])*(p[i][1]-p[0][1]));
        if(distance < mindist)
        {
            mindist = distance;
            minI = i;
        }
    }
    //int dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    //cout << dist << endl;
    cout << mindist << endl << "i: " << minI << endl;
    List.push_back(minI);




    int  i = 5;
    cout << sqrt(
                 (p[i][0]-p[0][0])*(p[i][0]-p[0][0])
                 +
                 (p[i][1]-p[0][1])*(p[i][1]-p[0][1])
                 ) << endl;*/

    //Inizjalizacja i przypisanie koordynatów miast(bez minut bo za dużo dla obliczeń)
    long **p;
    p = new long *[8];
    for(int i = 0; i < 8; i++) p[i] = new long[2];
    p[0][0] = 5213; p[0][1] = 2100; //Warszawa - start
    p[1][0] = 5326; p[1][1] = 1432; //Szczecin - end
    p[2][0] = 5106; p[2][1] = 1701; //Wroclaw
    p[3][0] = 5224; p[3][1] = 1656; //poznan
    p[4][0] = 5308; p[4][1] = 2308; //Bialystok
    p[5][0] = 5146; p[5][1] = 1927; //Lodz
    p[6][0] = 5003; p[6][1] = 1956; //Krakow
    p[7][0] = 5307; p[7][1] = 1800; //Bydgoszcz
    vector<int> Miasta = {2,3,4,5,6,7};
    vector<int>::iterator it;

    cout << "Trasa: " << endl << "Warszawa" << endl;

    //int TotalDistance;
    int distance, minDist, minI;

    int NextCity = 0,i;
    for(int j = 0; j<6; j++)
    {
        minDist = 9999999;
        //cout << "list of cities before run " << j << ": ";
        /*for(it = Miasta.begin(); it != Miasta.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;*/

        for(it = Miasta.begin(); it != Miasta.end(); it++)
        {
            i = *it;
            distance = sqrt((p[i][0]-p[NextCity][0])*(p[i][0]-p[NextCity][0])+(p[i][1]-p[NextCity][1])*(p[i][1]-p[NextCity][1]));
            if(distance < minDist)
            {
                minDist = distance;
                minI = i;
            }
        }
        //TotalDistance += minDist;
        NextCity = minI;
        //cout << "Run " << j << " minI: " << minI << endl;
        //cout << minI << endl;
        DisplayCityName(minI);

        it = find(Miasta.begin(), Miasta.end(), minI);
        Miasta.erase(it);
        //cout << count(Miasta.begin(), Miasta.end(),4);

        /*cout << "list of cities left after run " << j << ": ";
        for(it = Miasta.begin(); it != Miasta.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;*/
    }

    cout << "Szczecin" << endl;

    return 0;
}
