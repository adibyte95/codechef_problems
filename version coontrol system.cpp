#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a[101]={0};
		int b[101]={0};
		int p;
		for(int i=0;i<m;i++)
		{
			cin>>p;
			a[p%101]=1;
		}
		for(int i=0;i<k;i++)
		{
			cin>>p;
			b[p%101]=1;	
		}
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1 && b[i]==1)
			count++;
		}
		int count2=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==0 && b[i]==0)
			count2++;
		}
		cout<<count<<" "<<count2<<endl;
		t--;
	}
	return 0;
}
