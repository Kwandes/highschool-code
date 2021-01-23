#include<iostream>
#include<fstream>
using namespace std;
int nwd(int a, int b){
	if (b>0) return nwd(b,a%b);
		else return a;
}
int cyfry(int x){
	int s=0;
	while(x>0){
		s+=x%10;
		x/=10;
	}
	return s;
}
int main(){
	ifstream we;we.open("PARY_LICZB.TXT");
	int iloscwierszyA=0,iloscwierszyB=0,iloscwierszyC=0;
	if(!we) ;
		else{
			int a,b,sumA=0,sumB=0;
			for(int i=0;i<1000;i++){
			we>>a>>b;
			if(a%b==0 || b%a==0)	iloscwierszyA++;
			if(nwd(a,b)==1) 		iloscwierszyB++;
			if(cyfry(a)==cyfry(b))	iloscwierszyC++;
			/*	while(a>0){
					sumA+=a%10;
					a/=10;
				}
				while(b>0){
					sumB+=b%10;
					b/=10;
				}
			*/
			
			}
		}
	ofstream wy;wy.open("ZADANIE5.TXT");						
	wy<<"A: "<<iloscwierszyA<<endl<<"B: "<<iloscwierszyB<<endl<<"C: "<<iloscwierszyC;
	wy.close();
	we.close();
}
