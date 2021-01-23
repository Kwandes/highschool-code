#include <iostream>

using namespace std;

float potega (int m, float a)
{
	float b=a;
	for (int i=1; i<m; i++) a*=b;
	return a;
}

int main ()
{
	int n, m;
	float b=0, a;

	cin>>n>>m;

	for (int i=1; i<=n; i++)
	{
		cin>>a;
		if (m>0) b+=potega (m,a);
		else b+=1;
	}
	cout.precision(3);
    std::cout<< std::fixed;
	cout<<b;


	return 0;
}
