#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	long long int w=1;
	for(int i=1;i<=n;i++) {
		w=w*i;
	}
	cout<<w;
	return 0;
}
