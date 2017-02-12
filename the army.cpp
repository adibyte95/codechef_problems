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
		int a[n];
		for(int i=0;i<n;i++)
		a[i]=0;
        int b[m];
		for(int i=0;i<m;i++)
        cin>>b[i];
        sort(b,b+m);
        int pos=b[0];
         for(int i=0;i<n;i++)
			{
			   if(a[i]<abs(i-pos))
			   a[i]=abs(i-pos);	
			}
			
			
			pos=b[m-1];
		  for(int i=0;i<n;i++)
			{
			   if(a[i]<abs(i-pos))
			   a[i]=abs(i-pos);	
			}
			
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}
