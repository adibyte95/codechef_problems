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
		long long int b[n];
		for(int i=0;i<n;i++)
		b[i]=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		b[n-1]=1;
		
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>0 && a[i+1]<0 || a[i]<0 && a[i+1]>0)
			b[i]=1+b[i+1];
			else
			b[i]=1;
		}
		for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}
