//NWD
int nwd(int a, int b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return 1;
	
}