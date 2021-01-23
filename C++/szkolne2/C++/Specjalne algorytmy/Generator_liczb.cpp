#include<iostream>
#include<fstream>
#include<cstdlib>//funkcja rand
#include<ctime>
using namespace std;
void menu(){
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"-----------------Generator randomowych liczb-----------------"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Podaj ilosc liczb do wygenerowania: ";
	return;
}
void menu2(){
	cout<<endl<<"Podaj dlugosc liczb do wygenerowania: ";
	return ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	srand(time(NULL));
	ofstream liczby;liczby.open("Generated_numbers.txt");
	int n,dl=0,prz=0,odl=0,ETA=0,ilosc,x;//n-ilosc liczb, dl-dlugosc(ilosc cyfr),prz-ilosc przerw,odl-po ilu cyfrach jest prz.

////////////////////////////////////////////////////////////////////////////////////////////
	start:
	menu();	cin>>n;
	int dlmod[n];
	choice:
	cout<<"Czy liczba bedzie posiadac przerwy(np numer bankowy)?"<<endl<<"Y. Tak"<<endl<<"N.Nie"<<endl;
	char odp;
	cin>>odp;
////////////////////////////////////////////////////////////////////////////////////////////
	if(odp=='Y' || odp=='y'){
		cout<<"Podaj ilosc przerw: ";cin>>prz;cout<<endl;
		prz+=1;
		ilosc=prz;
		while(prz!=0){
			cout<<"Podaj po ilu cyfrach bedzie przerwa: ";cin>>odl;cout<<endl;
			dlmod[ETA]=odl;
			prz--;
			ETA++;
		}
		for(int m=0;m<n;m++){

			ETA=0;
			for(int i=0;i<ilosc;i++){
				//random(dlmod[ETA]);
				int j=dlmod[ETA];
				while(j!=0){
					x=rand()%10;
					cout<<x;
					liczby<<x;
					j--;
					}
					cout<<" ";
					liczby<<" ";
					j=0;
				ETA++;
			}
			liczby<<endl;
			cout<<endl;
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////
	else if(odp=='N' || odp=='n'){
		cout<<endl<<"Podaj dlugosc liczb do wygenerowania: ";
		cin>>dl;
		int dl2=dl;
		for(int i=0;i<n;i++){
			//random(dl);
			dl=dl2;
			while(dl!=0){
					x=rand()%10;
					cout<<x;
					liczby<<x;
					dl--;
					}
					cout<<" ";
					liczby<<" ";
					//dl=0;
		}
		liczby<<endl;
		cout<<endl;
	}
////////////////////////////////////////////////////////////////////////////////////////////
	else{
		cout<<"Niepoprawna odpowiedŸ"<<endl;
		cout<<"Czy chcesz kontynuowac?"<<endl;
		cout<<"Y. Tak"<<endl<<"N.Nie"<<endl;
		char odp;
		cin>>odp;
		if(odp=='Y' || odp=='y') goto choice;
			else{
			liczby<<"User canceled the proccess"<<endl;
			goto end;
		}
	}
	cout<<"Do you want to generate another set of numbers?"<<endl;
	cout<<"Y. Tak"<<endl<<"N.Nie"<<endl;
	cin>>odp;
		if(odp=='Y' || odp=='y') goto start;
			else{
			 cout<<"Goodbye";goto end;
		}
	end:
	liczby.close();
	return 0;
}
