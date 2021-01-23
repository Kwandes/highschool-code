#include <iostream>
using namespace std;
int main() {
	int d;//ilosc zestawow danych
	cin>>d;
	int i1,y1,r1,i2,y2,r2;//i,y-wspolrzedne,r-promien,1-pierwszy zraszacz,2-drugi zraszacz
		for (int i=1;i<d;i++){
		cin>>i1,y1,r1,i2,y2,r2;
		int mai1=i1+r1;
		int mii1=i1-r1;
		int may1=y1+r1;
		int miy1=y1-r1;
		int mai2=i2+r2;
		int mii2=i2-r2;
		int may2=y2+r2;
		int miy2=y2-r2;
			if (mai1=mai2) || (mii1=mii2) || (may1=may2) || (miy1=miy2) {
				cout<<"False";
			}
			else{
			cout<<"True";
			}
		}
	}
