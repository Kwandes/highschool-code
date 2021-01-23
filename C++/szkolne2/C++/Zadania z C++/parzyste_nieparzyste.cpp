#include <iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	string tab[n];
		for (int i=0;i<n;i++){
		cin>>a;
		if (a%2) {
			tab[i]="nieparzysta";
		}
		else {
			tab[i]="parzysta";
		}
	}
		for (int j=0;j<n;j++){
			cout<<tab[j]<<endl;}
}
