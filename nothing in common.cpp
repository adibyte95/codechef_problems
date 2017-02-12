#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int m,n;
		cin>>m>>n;
		int a[m];
		set<int > b;
		for(int i=0;i<m;i++)
		{
		   cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			b.insert(p);
		}
		
		long long int count=0;
		for(int i=0;i<m;i++)
		{
			if(b.find(a[i]) !=b.end())
			count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
