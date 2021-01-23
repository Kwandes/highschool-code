#include <iostream>
#include <windows.h>
using namespace std;
//Funkcje rekurencyjne
void menu(){

	cout<<"Witamy w programie Funkcje rekurencyjne"<<endl;
	cout<<"Wpisz liczbe w celu wybrania funkcji:"<<endl;
	cout<<"s. Silnia"<<endl<<"p.Potega"<<endl<<"f. Fibbonecci"<<endl<<"n.NWD"<<endl<<"q.QUIT"<<endl;
}
//-----------------------------------------------------------
long long silnia(int n){
	if(n>1) return silnia(n-1)*n;
		else return 1;
}
//-----------------------------------------------------------
int potega(int n, double a){
	if(n>0) return potega(n-1,a)*a;
		else return 1;
}
//-----------------------------------------------------------
long long fib(int n){
	if (n>2) return fib(n-2)+fib(n-1);
		else return 1;
}
//-----------------------------------------------------------
int nwd(int a, int b){
	if (b>0) return nwd(b,a%b);
		else return a;
}
int main(){
	int quit;
	do{
	menu();
	char opcja;//cyfra wybierajaca funkcje
	cin>>opcja;
	int n,a,b;
	double p;
	system("cls");
		switch(opcja){
			case 's'  :{
			cout<<"--------------Silnia--------------"<<endl;
			cout<<"Podaj liczbe"<<endl;
			cin>>n;
			cout<<"Wynik to: "<<silnia(n);
				break;
			}
			case 'f' :{
				cout<<"--------------Fibonecci--------------"<<endl;
				cout<<"Podaj liczbe"<<endl;
				cin>>n;
				cout<<"Wynik to: "<<fib(n)<<endl;
				break;
			}
			case 'p' :{
				cout<<"--------------Potega--------------"<<endl;
				cout<<"Podaj liczbe"<<endl;
				cin>>n;
				cout<<"Podaj potege"<<endl;
				cin>>p;
				cout<<"Wynik to: "<<potega(n,p)<<endl;
				break;
			}
			case 'n':{
				cout<<"--------------NWD dwoch liczb--------------"<<endl;
				cout<<"Podaj pierwsza liczbe"<<endl;
				cin>>a;
				cout<<"Podaj druga liczbe"<<endl;
				cin>>b;
				cout<<"Najwiekszy dzielnik to: "<<nwd(a,b)<<endl;
				break;
			}
			case 'q':{
				quit=1;
				break;
			}
			default :{ 
			cout<<"wybrana opcja nie istnieje"<<endl;
			break;
		}	
	}
}
	while(quit=0);

}

