#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    beginning:
  cout<<"Sorting program"<<endl<<"What would you like to sort?"<<endl;
  cout<<"N. Numbers"<<endl<<"W. Words"<<endl<<"Q. Quit"<<endl;
  char answer;cin>>answer;
  switch(answer){
  case 'n' :{
        cout<<"You chose numbers."<<endl;
        int numbers[100];
        int sortednum[100];
        int temporary[100];
        int countnum,count;
            cout<<"How many numbers do you want to sort: ";
            cin>>countnum; cout<<endl;
            cout<<"Insert number: ";
            cin>>numbers[0];
            cout<<endl;
            for(int i=1;i<countnum;i++){
             cout<<"Insert next number: ";
             cin>>numbers[i];
             cout<<endl;
            }
            /////////////SORTING///////////
            cout<<"numbers from biggest to smallest:"<<endl;
            for(int i=0;i<countnum;i++){
                for(int j=0;j<countnum;){
                    int bigger,smaller;
                    sorting:
                    if(numbers[j]>numbers[j+1]);
                        else{
                            bigger=numbers[j+1];
                            smaller=numbers[j];
                            numbers[j]=bigger;
                            numbers[j+1]=smaller;
                     
                            goto sorting;
                    }
                
                count++;
                    if(i==countnum-1){
                        cout<<numbers[j]<<endl;
                    }
                j++;
                }
            }
            cout<<"Do you wish to sort something else?"<<endl;
            cout<<"Y. Yes"<<endl<<"N. No"<<endl;
            char repeat;
            cin>>repeat;
            if(repeat=='Y' || repeat=='y') {
                system("cls");
                goto beginning;
                }
            break;
  }
  case 'w' :cout<<"You chose words"<<endl<<"this part of the program is still under development,sorry"<<endl; break;
  case 'q' :system("cls");cout<<"Goodbye"<<endl; break;
 default :system("cls");cout<<"Goodbye,you cunt"<<endl; break;



}
  
return 0;
}
