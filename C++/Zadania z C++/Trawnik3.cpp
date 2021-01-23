#include <iostream>
using namespace std;
//int zraszacz(int x,int y, int 2x,int 2y, int r, int 2r){
//cin>>x>>y>>r>>2x>>2y>>2r;
//x=x+r;
//y=y+r;
//2x=2x+2r;
//2y=2y+2r;
    //if(x==2x)&&(y==2y) return 1;
    //else return 0;
//}
int main(){
int n,x,y,vx,vy,r,vr;
cin>>n;
for (int i=0;n<i;i++){
    cin>>x>>y>>r>>vx>>vy>>vr;
	x=x+r;
	y=y+r;
	vx=vx+vr;
	vy=vy+vr;
		if (x=vx){
			if (y=vy) cout<<"NIE"<<endl;
		}
    	else{
		cout<<"TAK"<<endl;
    	}
    
	}
return 0;
}
