#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int b[n];
		for(int i=0;i<n;i++)
		b[i]=0;
		int count=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]!=a[i-1])
			{
				b[i]=1;b[i-1]=1;
			}
		}
		for(int i=0;i<n;i++)
		count+=b[i];
		cout<<count<<endl;
		t--;
	}
	return 0;
}
