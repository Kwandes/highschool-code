#include <iostream>
using namespace std;
int main(){
	unsigned long long n,a,b,p=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a>>b;
		p=p+(a*b);
		
	}
	cout<<p;
}
