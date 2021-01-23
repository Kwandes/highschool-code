#include <iostream>
using namespace std;
int main (){
	long long n,a=0,w=0;
	cin>>n;
	for (int i=0;i<n;i++){
		a+=1;
		w=w+(a*a);
	}
	cout<<w;
}
