#include <iostream>
using namespace std;
int main(){
	int testnum,accountnum;
	int account[10][100][6];//what test,what account,which number
	int safefile[10][100];//what test, what account
	///////////input-start//////////	
	cout<<"Amount of tests: ";
	cin>>testnum;
	cout<<endl;
	for(int i=0;i<testnum;i++){
		cout<<"Amount of accounts in the test: ";
		cin>>accountnum;
		cout<<endl;
		safefile[i][i]=accountnum-1;
		for(int j=0;j<accountnum;j++){
			cout<<"insert account: ";
			for(int num=0;num<=5;num++){
				cin>>account[i][j][num];
			}//number
			cout<<endl;
		}//accountnum
	}//testnum
	///////////input-end//////////	

	///////////sort-start//////////
	int bigger,smaller,count=0,counter=0;
	int acccounter[10][100][50];
	int sortedaccount[10][100][6];
	
	for(int i=0;i<testnum;i++){
		cout<<"sorting test: "<<i+1<<endl;
		accountnum=safefile[i][i];
		for(int j=0;j<=accountnum-1;j++){
			cout<<"sorting account: "<<j+1<<endl;
			for(int num=0;num<=5;num++){
				cout<<"sorting number: "<<num+1<<" is ";
			///////////////////////// IF EQUAL ///////////////////////
				
				
				if (account[i][j][num]==account[i][j+1][num]){
					cout<<"equal.";
					//count++;
					counter++;
					if (counter==6){
						count++; counter=0;
					}
					if(count>=1){
						acccounter[i][j][0]=count;
						cout<<endl<<"It has repeat "<<acccounter[i][j][0]<<" time."<<endl;
					
					}
					else cout<<endl;
				}
				
				///////////////////////// IF BIGGER ///////////////////////
				
				
				if (account[i][j][num]>account[i][j+1][num]){
					cout<<"bigger"<<endl;
					
				} 
				
				///////////////////////// IF Smaller ///////////////////////
				
				sort:
				if (account[i][j][num]<account[i][j+1][num]){
					//cout<<"smaller"<<endl;
					bigger=account[i][j+1][num];
					smaller=account[i][j][num];
					sortedaccount[i][j][num]=bigger;
					sortedaccount[i][j+1][num]=smaller;
					testing:
					int	x;
					x=0;
					cout<<"*";
					for (x=0;x<=100;x++){
						cout<<" ";
						
						
					}
					goto testing;
					goto sort;
				}
				
				
				
			}//num
		}//accountnum
	}//testnum
	
	///////////sort-end//////////

	///////////cout-start//////////
	for(int i=0;i<testnum;i++){
		cout<<"Test number "<<i+1<<endl;
		cout<<"Amount of accounts in the test: ";
		int accsize=safefile[i][i];
		cout<<accsize+1<<endl;
		accountnum=safefile[i][i];
		for(int j=0;j<=accountnum;j++){
			cout<<"account number "<<j+1<<": ";
			for(int num=0;num<=5;num++){
				cout<<account[i][j][num]<<" ";
			}//number
			cout<<endl;
			accountnum=safefile[i][i];
			for(int num=0;num<=5;num++){
				cout<<sortedaccount[i][j][num]<<" ";
			}//number
			cout<<endl;
			accountnum=safefile[i][i];
			
		}//accountnum
	}//testnum
	///////////cout-end///////////
return 0;
}//main
