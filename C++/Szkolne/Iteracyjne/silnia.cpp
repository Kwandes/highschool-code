#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long w=1;
	for(int i=2;i<=n;i++){
		w=w*i;
	}
	cout<<n<<"!="<<w;
	return 0;
}
