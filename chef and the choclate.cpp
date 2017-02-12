#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,m;
		cin>>n>>m;
		if(n==1 && m%2!=0)
		cout<<"No"<<endl;
		else if(n==1 && m%2==0)
		cout<<"Yes"<<endl;
		
		else if(m==1 && n%2==0)
		cout<<"Yes"<<endl;
		else if(m==1 && n%2!=0)
		cout<<"No"<<endl;
		else
		{
			if(n%2==0 || m%2==0)
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
		t--;
	}
	return 0;
}
