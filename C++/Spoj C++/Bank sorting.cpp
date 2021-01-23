#include<iostream>
using namespace std;
int main(){
	int testnum,accnum;
	cin>>testnum;
	int account[accnum][100];
	////////////////////Inserting acounnts///////////
	for(int x=0;x<testnum;x++){
		cin>>accnum;
		for(int i=0;i<accnum;i++){
			for(int j=0;j<=5;j++){
				cin>>account[i][j];
				
			}
			/*
			for(int j=0;j<=5;j++){
				cout<<account[i][j]<<" ";
			}*/
		
		}
	cout<<endl;
	}
	////////////////////--------------///////////
	int number=0;
	for(int test=0;test<testnum;test++){
		for(int num=0;num<accnum;num++){
			for(int number=0;number<=5;number++){
				int bigger,smaller;
				sorting:
				if(account[accnum][number]>account[accnum+1][number]);
				else{
					bigger=account[accnum+1][number];
					smaller=account[accnum][number];
					account[accnum][number]=bigger;
					account[accnum+1][number]=smaller;
					goto sorting;
				}
			}cout<<"wohoo";
		}
	cout<<"wohoo";
	}
	endoftest:
	
	
	
	return 0;
}
