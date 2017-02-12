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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int b[100000]={0};
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(b[a[i]-1]==0)
			{
				b[a[i]-1]++;
				count++;
			}
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
