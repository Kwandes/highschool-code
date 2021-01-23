#include<iostream>
using namespace std;
int main(){
	long long x,testi,testx;
	cin>>x;
	for(int i=1;i<=x;i++){
		cout<<"-------------------"<<endl;
		testi=i;
		testx=x;
		if(testx&testi==0) cout<<"i: "<<i<<endl;
	}
	cout<<"end";
	return 0;
}
