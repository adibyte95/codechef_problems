#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,k,e,m;
		cin>>n>>k>>e>>m;
		long long int sum[n];
		
		for(int i=0;i<n;i++)
		sum[i]=0;
		
		long long int a[n][e];
		long long int p=0,s=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<e;j++)
			{
				cin>>p;
				a[i][j]=p;
				s+=p;
			}
			sum[i]=s;
			s=0;
		}
		long long int ssum=0;
		p=0;
		for(int i=0;i<e-1;i++)
		{
			cin>>p;
			ssum+=p;
		}
		sort(sum,sum+n);
	    long long int exp=1+sum[n-k]-ssum;
			if(exp>m)
			cout<<"Impossible"<<endl;
			else if(exp<0)
			cout<<0<<endl;
			else
			cout<<exp<<endl;
		t--;
	}	
	return 0;
}
