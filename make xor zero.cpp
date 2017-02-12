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
		int count0=0;
		int count1=0;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			if(p==0)
			count0++;
			else
			count1++;
		}
	    if(count1%2!=0)
	    cout<<count1<<endl;
	    else
	    cout<<count0<<endl;
		t--;
	}
	return 0;
}
