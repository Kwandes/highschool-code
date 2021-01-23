#include <iostream>
using namespace std;
int main(){
	int n,w=0,a,b=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a;
		if (a%2) {
			w=2*a;
			cout<<w<<" ";
		}
		else {
			w=a;
			cout<<w<<" ";
		}
		
	}
	
}
