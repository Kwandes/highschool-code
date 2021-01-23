#include <iostream>
using namespace std;
int main (){
	cout<<"----Fibonecci----"<<endl;
	cout<<"Podaj numer: ";
	int n;cin>>n;
	long long f1=1, f2=1, f3=1;
	for(int i=2;i<n;i++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	cout<<"Liczba Fibonacciego o nr "<<n<<" to "<<f3;
}
