#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int n,a,ilezer=0;
	scanf("%i",n);
	for (int i=n;i>0;i--){
		scanf("%i",a);//0 lub 1
		if(a==0) ilezer++;
	}
	int ilejeden=n-ilezer;
	if(ilezer<ilejeden) printf("%i",ilezer);
	else printf("%i",ilejeden);
	return 0;
}
