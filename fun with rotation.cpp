#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	char c;
	int d;
	int start=0;
	while(q>0)	
	{
		cin>>c;
		cin>>d;
		if(c=='C')
		{
			d=d%n;
			start=start+d;
			/*cout<<a[start]<<" ";
			int pos=(start+1)%n;
			while(pos!=start)
			{
				cout<<a[pos]<<" ";
				pos++;
				pos=pos%n;
			}
			cout<<endl;*/
		}
		else if(c=='A')
		{
		     d=d%n;
		     start=(start-d)%n;
		     if(start<0)
		     start=n+start;
/*		     cout<<a[start]<<" ";
		     int pos=(start+1)%n;
			while(pos!=start)
			{
				cout<<a[pos]<<" ";
				pos++;
				pos=pos%n;
			}
			cout<<endl;*/
		}
		else if(c=='R')
		{
			int p=(start+d-1)%n;
			cout<<a[p]<<endl;
		}
		q--;
	}
	return 0;
}
