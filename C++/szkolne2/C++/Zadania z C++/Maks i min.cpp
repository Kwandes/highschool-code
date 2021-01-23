#include <iostream>
using namespace std;
main () {
	cout<<"Podaj ilosc liczb: "<<endl;
	int n,a;
	cin>>n;
	cout<<"Podaj liczby: "<<endl;
	cin>>a;
	int maks=a;
	int min=a;
	for(int i=2;i<=n;i++){
		cin>>a;
		if(a>maks) maks=a;
		if(a<min) min=a;	
	}
	cout<<"maksymalna liczba: "<<maks<<endl;
	cout<<"Minimalna liczba: "<<min;

}
