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
		sort(a,a+n);

		int sum=0;
		int p=n-1;
		while(p>=0)
		{
			if(p>=0)
			sum+=a[p];
			if(p>=0)
			sum+=a[p-1];
			p=p-4;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
