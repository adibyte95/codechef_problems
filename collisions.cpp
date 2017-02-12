#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		char a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>a[i][j];
		}
		int c=0;
		int count=0;
		for(int i=0;i<m;i++)
		{
			 count=0;
			for(int j=0;j<n;j++)
				{
				if(a[j][i]=='1')	
				count++;
			    }
			if(count>1)
			{
				c+=((count)*(count-1))/2;
			}
		}
		cout<<c<<endl;
		t--;
	}
return 0;	
}
