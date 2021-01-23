#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int point(int x, int y)
{
    int calc;
    calc = (x-200)*(x-200)+(y-200)*(y-200);
    return calc;
}
int main()
{
    ifstream in;
    in.open("punkty.txt");
    int x,y,result;
    int inside=0,on=0,outside=0;
    for(int i=0;i<10000;i++)
    {
    in>>x>>y;
    result = point(x,y);
    if(result ==40000)      on++;
    else if(result < 40000) inside++;
    else                    outside++;
    }
    in.close(); //reset the mark
    ofstream save;
    save.open("wyniki_4.txt");
    cout << "Zad1." << inside << endl;
    save << "Zad1." << endl << inside << endl;

    ///////////4.2.............
    in.open("punkty.txt");
    float nk=0,n=0;
    for(int i=0;i<1000;i++)
    {
    in>>x>>y;
    result = point(x,y);
    n++;
    if(result <= 40000) nk++;
    }
    printf("%.4f\n",nk/n*4);
    save << "Zad2." << endl << setprecision(5) << nk/n*4 << endl;
    in.close();
    /////////////////////////////
    in.open("punkty.txt");
    nk=0;
    n=0;
    for(int i=0;i<5000;i++)
    {
    in>>x>>y;
    result = point(x,y);
    n++;
    if(result <= 40000) nk++;
    }
    printf("%.4f\n",nk/n*4);
    save << setprecision(5) << nk/n*4 << endl;
    in.close();
    //////////////////
    in.open("punkty.txt");
    nk=0;
    n=0;
    for(int i=0;i<10000;i++)
    {
    in>>x>>y;
    result = point(x,y);
    n++;
    if(result <= 40000) nk++;
    }
    printf("%.4f\n",nk/n*4);
    save << setprecision(5) << nk/n*4 << endl;
    save.close();
    in.close();
    return 0;
}
