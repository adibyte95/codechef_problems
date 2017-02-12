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
		string s;
		cin>>s;
		int count=0;
		int a[2*s.length()];
		for(int i=0;i<2*s.length();i++)
		a[i]=0;
	    
		if(s[0]=='1')
	    a[1]=1;
	    if(s[n-1]=='1')
	    a[2*n-2]=1;
	    
		int looper=2;
	    for(int i=1;i<n-1;i++)
	    {
	    	if(s[i]=='1')
	    	{
	    		a[looper]=1;
	    		looper++;
	    		a[looper]=1;
	    		looper++;
			}
			else
			looper+=2;
		}
/*		
		cout<<"the array is: "<<endl;
		for(int i=0;i<2*n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
*/
		looper=0;
		for(int i=0;i<s.length();i++)
		{
			if(a[looper]==1 && i>=1)
			s[i-1]='1';
			looper++;
			if(a[looper]==1 && i<n)
			s[i+1]='1';
			looper++;
		}
//		cout<<"s is: "<<s<<endl;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			count++;
		}
		cout<<count<<endl;
		t--;
		
	}
	return 0;
}
