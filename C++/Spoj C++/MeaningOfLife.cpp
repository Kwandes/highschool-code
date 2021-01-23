#include <iostream>
using namespace std;
int main(){
	int input[100],i=0,x,j=0;
	while(x!=42){
		cin>>x;
		input[i]=x;
		i++;		
	}
	i-=1;
	while(i>j){
		cout<<input[j]<<endl;
		j++;
	}
	return 0;
}
