#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m,c;
		cin>>n>>m>>c;
		int pos1=1;
		int count=0;
		while(pos1<=n)
		{
			int d =c/pos1;
	        if(d <=m && d*pos1==c)
	        	count++;
			pos1++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
