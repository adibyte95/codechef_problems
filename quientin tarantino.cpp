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
		int a[501]={0};
		int p;
		int max=-1;
		int last=0;
		int yes=1; // initially it is true
		for(int i=0;i<n;i++)
		{
			cin>>p;
			if(p!=last+1 && yes==1)
				yes=0;
			else if(p==last+1 && yes==1)
            last=p;			
			if(max<p)
			max=p;
			a[p%501]++;
		}
		if(yes==1)
		cout<<"no"<<endl;
		else
		{
		  int flag=0;
		for(int i=1;i<=max;i++)
		{
			if(a[i]>=2 || a[i]==0)
			{
				cout<<"no"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"yes"<<endl;
	
		}
				t--;
	}
	return 0;
}
