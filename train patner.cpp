#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;	cin>>n;	int x=n;
		int p=n/8;	n=n-p*8;
		if(n==3)cout<<x+3<<"UB"<<endl;
		if(n==6)cout<<x-3<<"UB"<<endl;
		if(n==2)cout<<x+3<<"MB"<<endl;
		if(n==5)cout<<x-3<<"MB"<<endl;
		if(n==1)cout<<x+3<<"LB"<<endl;
		if(n==4)cout<<x-3<<"LB"<<endl;
		if(n==7)cout<<x+1<<"SU"<<endl;
		if(n==0)cout<<x-1<<"SL"<<endl;
		t--;
	}
	return 0;
}
