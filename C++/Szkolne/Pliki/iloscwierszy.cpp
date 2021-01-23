#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream in;ofstream out;
	in.open("PARY_LICZB.txt");
	int wynik=0;
	char x;
	if (!in)cout<<"file missing"<<endl;
		else{
		while(in>>x)
			if(x== '\n') wynik++;			
			
		}
	in.close();	
	out.open("iloscwierszy.txt");
	out<<wynik;
	out.close();
	
}
