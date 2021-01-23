#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream wy;wy.open("ZADANIE5.TXT");
	ifstream we;
	int iloscwierszy=0;
	we.open("PARY_LICZB.TXT");
	if(!we) cout<<"file missing"<<endl;
		else{
			int a,b;
			for(int i=0;i<1000;i++){
			we>>a>>b;
			if(a%b==0 || b%a==0){
			//	cout<<a<<" "<<b<<endl;
				iloscwierszy++;
				}
			}			
		}
	wy<<"a: "<<iloscwierszy<<endl;
	wy.close();
	we.close();
}
