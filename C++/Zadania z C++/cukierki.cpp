#include <iostream>
using namespace std;
int main(){
	int n,a,w=0,max=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		 if (a%2==0){
		 	if (a>max){
		 		max=a;
		 		w=i;
			 }
		 }
	}
cout<<w;
return 0;
}

