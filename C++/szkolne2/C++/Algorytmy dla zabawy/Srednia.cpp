#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	double Srednia=0.0,ocena=0.0,waga=1.0,ilosc=0.0,x=0.0;
	while(x!=1){
	cout<<"Wprowadz ocene: "<<endl;
	cin>>ocena;
//	cout<<"Wprowadz jej wage: "<<endl;
//	cin>>waga;
	ilosc++;
	Srednia=Srednia+(ocena*waga);
	cout<<"czy to koniec ocen?"<<endl<<"1-tak"<<endl<<"0-nie"<<endl;
	cin>>x;
	system("cls");
	}
	cout<<"Srednia wynosi: "<<Srednia/ilosc<<endl;
}
