#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	cin>>a[i];
	sort(a,a+4);
	double a1,b1,a2,b2,a3,b3;
	a1=a[1]/(a[0]*1.0);
	b1=a[3]/(a[2]*1.0);
	
	a2=a[1]/(a[2]*1.0);
	b2=a[0]/(a[3]*1.0);
	
	a3=a[0]/(a[2]*1.0);
	b3=a[1]/(a[3]*1.0);
	
	if(a1==b1 || a2==b2 || a3==b3)
	cout<<"Possible"<<endl;
	else
	cout<<"Impossible"<<endl;
	return 0;
} 
