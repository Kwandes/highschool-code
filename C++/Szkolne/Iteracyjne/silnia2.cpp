#include <iostream>
using namespace std;
int main(){
	cout<<"----Silnia----"<<endl;
	cout<<"Podaj liczbe: ";
	int n;cin>>n;
	
	long long wynik=1;
	for(int i=2;i<=n;i++){
		wynik=wynik*i;
	
	}
	cout<<n<<"!= "<<wynik;
}
