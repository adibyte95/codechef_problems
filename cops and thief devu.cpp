#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int m,x,y;
		cin>>m>>x>>y;
		
		int a[100]={0};
		int b[m];
		
		for(int i=0;i<m;i++)
		cin>>b[i];
		
		int p=x*y;
		for(int i=0;i<m;i++)
		{
			int min=b[i]-p;
			if(min<0)
			min=0;
			
			int max=b[i]+p;
			if(max>100)
			max=100;
			for(int j=min-1;j<max;j++)
			a[j]=1;
		}
		int count=0;
		for(int i=0;i<100;i++)
		if(a[i]==0)
		count++;
		
		cout<<count<<endl;
		t--;
	}
	return 0;
}
