#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <iterator>

using namespace std;
class Item
{
public:
	void assignDouble(double _value) { _double.push_back( _value );}

	vector<double> getDouble() {return _double;}

	void displayDouble()
	{
	    if(_double.empty())     //Making sure there are resources to display
        {
            cout << "The item requires no resources/is base resource/something bugged out" << endl;
        }
        else                                            //If resources exist, list them
        {
            for (int i = 0; i < _double.size(); i++)      //Iterate through the vectors and display values
                {
                    cout << "Value of double: " << _double.at(i) << endl;
                }
            cout << "---------------------" << endl;
        }
	}
private:
	std::vector<double> _double;

};

void displayInfo(Item *ptr)
{
    ptr->displayDouble();
}

void changePTR( map<int, Item> Map, int _ID, Item *&ptr)       //refers the map with IDs and provides the ID for which the reference is needed
{

    //Item *pointer;                                    //local pointer
    map<int,Item>::iterator _itr;                       //local iterator
    _itr = Map.find(_ID);                               //search for an ID
    //cout << "Debug:: itr " << _itr->first << endl;
    ptr = &(_itr->second);                              //assigning found item to the pointer
    //ptr = &(Map.find(_ID)->second);
    //return pointer;                                   //returning the pointer
    //ptr->displayDouble();

}

void InitMap(map<int,int> &Map, map<int,Item> &items)
{
    map<int, Item>::iterator itr = items.begin();
    for (itr =items.begin(); itr != items.end(); itr++)
    {
        Map.insert(pair<int,int>(itr->first, 0));
    }
}

int main()
{


    /* Setup of main object of class Item */
    Item *ptr;

    //cout << "1" << endl;
    Item test1;
    test1.assignDouble(10.1);
    //test1.displayDouble();
    //cout << "1.1" << endl;
    test1.assignDouble(10.2);
    //test1.displayDouble();
    test1.assignDouble(10.3);
    cout << "initial test after init: " << endl;
    test1.displayDouble();

    /* Map of the objects. Each object has an int ID mapped to it */

    map<int,Item> items;                        //Map of ID - Item
    map<int,Item>::iterator itr;

    items.insert(std::pair<int,Item>(1,test1));

    /* Map of resource-amount. Not needed atm */

    //map<int,int> Map;
    //InitMap(Map, items);
    //map<int,int>::iterator resITR= Map.begin();




    /* Debugging */
    cout << "Debugging" << endl << endl;

    cout << "test1.desiplayDouble(): " << endl;
    test1.displayDouble();


    cout << "ptr = &test1 + displayDouble(ptr) " << endl;
    ptr = &test1;

    displayInfo(ptr);

    cout << "changePTR(items, 1, ptr) + displayDouble(ptr) " << endl;
    changePTR(items, 1, ptr);


    //ptr->getDouble();
    //cout << "3" << endl;
    displayInfo(ptr);



    return 0;
}
