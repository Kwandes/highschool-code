#include <iostream>
using namespace std;
int main(){
	int t, lg, lm, ls;
	cin>>t;
	lg=t%(24*60*60)/(60*60);
	lm=t%(60*60)/60;
	ls=t%60;
	cout<<lg<<"g"<<lm<<"m"<<ls<<"s";
	return 0;	    }
