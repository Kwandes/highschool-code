	
#include <fstream>
using namespace std;
int main(){
   int i, a, sum_cyfr1, sum_cyfr2, pomoc, licznik;
   string liczba1, liczba2;
   sum_cyfr1=0;
   sum_cyfr2=0;
   licznik=0;
   fstream plik;
   ofstream zadanie;
   plik.open("PARY_LICZB.TXT", ios::in);
   zadanie.open("zadanie5c.txt");
   for(a=0; ;a++){
     if(plik.good()){
      plik >> liczba1 >> liczba2;
        for(i=0 ; i<=liczba1.size()-1; i++){
          pomoc=liczba1[i]-'0';
          sum_cyfr1+=pomoc;}
        for(i=0 ; i<=liczba2.size()-1; i++){
          pomoc=liczba2[i]-'0';
          sum_cyfr2+=pomoc;}
      if(sum_cyfr1==sum_cyfr2) licznik++;
      sum_cyfr1=0;
      sum_cyfr2=0;
     }else{break;}
   }
zadanie << "C: " << licznik;
plik.close();
zadanie.close();
}
