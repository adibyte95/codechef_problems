#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  t;
	cin>>t;
	while(t>0)
	{
		int count=0;
		int n,k;
		cin>>n>>k;
		int b[101]={0};
		int a[n];
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			a[i]=p;
			b[p]++;
		}
	  	
		for(int i=0;i<n;i++)
		{
			if( a[i]!=i+1 && b[i+1]>=k)
			count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
