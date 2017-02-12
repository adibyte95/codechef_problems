#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
		int n;
	for(int q=0;q<t;q++)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int k;
		cin>>k;
		int num=a[k-1];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]==num)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}
