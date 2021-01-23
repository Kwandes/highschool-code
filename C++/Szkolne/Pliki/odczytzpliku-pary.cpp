#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream we;
	we.open("PARY_LICZB.TXT");
	if(!we) cout<<"file missing"<<endl;
		else{
			int a=0,b=0;
			for(int i=0;i<1000;i++){
			we>>a>>b;
			//a+=b;
			cout<<a+b<<endl;
			}			
		}
	we.close();
}
