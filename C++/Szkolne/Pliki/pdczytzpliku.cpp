#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream we;
	we.open("PARY_LICZB.TXT");
	if(!we) cout<<"file missing"<<endl;
		else{
			int a,sum;
			for(int i=0;i<2000;i++){
			we>>a;
			sum+=a;
			}
			cout<<sum;			
		}
	we.close();
}
