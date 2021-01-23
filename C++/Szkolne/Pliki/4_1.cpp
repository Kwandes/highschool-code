#include <iostream>;
#include <fstream>
using namespace std;
void rownanie(int x,int y)
{
	int a=x-200,b=y-200;
	/*if()
	{
		cout<<x<<" , "<<y<<endl;
	}
	return;*/
}

int main(){
	int a=200,b=200,x,y,r=200*200;
	ifstream in;in.open("punkty.txt");
	for(int i=0;i<1000;i++)
	{
	in>>x>>y;
	rownanie(x,y);
	}
	
	in.close();
}
