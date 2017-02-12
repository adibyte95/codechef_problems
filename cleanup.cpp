#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int m,n;
	for(int k=0;k<t;k++)
	{
		cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	    a[i]=0;
	    
	    int turn=0; //0 for chef 1 for assistant
	    
		for(int j=0;j<m;j++)
		{
			int l;
			cin>>l;
			a[l-1]=1;	//completed
		}
		for(int j=0;j<n;j++)
		{
			if(a[j]!=1 && turn ==0)
			{
				a[j]=2;//for  chef
				turn =1;
			}
			else if(a[j]!=1 && turn ==1)
			{
				a[j]=3; //for assistant
				turn =0;
			}
		}
		
				//display
		for(int i=0;i<n;i++)
		{
			if(a[i]==2)
			cout<<i+1<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
					if(a[i]==3)
			cout<<i+1<<" ";
		}
		cout<<endl;

	}
	
	return 0;
}
