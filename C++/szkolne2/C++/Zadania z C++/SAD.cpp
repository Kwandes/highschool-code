#include <iostream>
using namespace std;
main(){
	int n;//n=ilosc jabloni
	cin>>n;
	int a,b;//a i b to koordynaty jabloni
	cin>>a;
	cin>>b;
	int maksx=a;
	int minx=a;
	long long maksy=b;
	long long miny=b;
	for(int i=2;i<=n;i++){
		cin>>a;
		if(a>maksx) maksx=a;
		if(a<minx)  minx=a;	
		cin>>b;
		if(b>maksy) maksy=b;
		if(b<miny)  miny=b;
	}
	cout<<2*(maksx-minx)+2*(maksy-miny);
	return 0;	
}
