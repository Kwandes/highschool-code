#include <iostream>
using namespace std;
main () {
	cout<<"Podaj ilosc liczb: "<<endl;
	int m,b;
	cin>>m; //ilosc liczb
	cout<<"Podaj liczby: "<<endl;
	cin>>b;
	int min=b;
	for(int i=2;i<=m;i++){
		cin>>b;
		if(b<min) min=b;
			
	}
	cout<<"najmniejsza liczba: "<<min;

}
