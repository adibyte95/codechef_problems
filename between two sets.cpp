#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int j=0;j<m;j++)
	cin>>b[j];
	
	sort(a,a+n);
	sort(b,b+m);
	int count=0;
	for(int i=a[n-1];i<=b[0];i++)
	{
			int flag1=0;
	        int flag2=0;
		for(int j=0;j<n;j++)
		{
			if(i%a[j] ==0 )
			continue;
			else
			{
				flag1=1;
				break;
			}
		}
		for(int j=0;j<m;j++)
		{
			if(b[j]%i==0)
			continue;
			else
			{
				flag2=1;
				break;
			}
		}
		if(flag1 ==0 && flag2==0)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
