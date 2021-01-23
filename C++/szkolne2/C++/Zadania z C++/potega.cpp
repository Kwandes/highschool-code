#include <iostream>
using namespace std;
int main (){
	cout<<"----Potega----"<<endl;
	cout<<"Podaj podstawe: ";
	double a;cin>>a;
	cout<<"Podaj wykladnik: ";
	int n;cin>>n;
	double wynik=1;
	for( int i=0;i<n ;i++ ){
	wynik=wynik*a;
	}
	cout<<"wynik= "<<wynik;

}
