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
		int i=n-1;
		int val=1;
		int flag=0;
		while(i>0)
		{
			if(a[i]==a[i-1] && flag==0)
			{
				val=val*a[i];
				flag=1;
				i=i-2;
			}
			if(a[i]==a[i-1] && flag==1)
			{
				val=val*a[i];
				flag=2;
				break;
			}
			else
			i--;
		}
		if(flag==1 || flag==0 )
		cout<<-1<<endl;
		else
		cout<<val<<endl;
		t--;
	}
	return 0;
}
