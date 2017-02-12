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
        
        int type[n][100];
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<100;j++)
        	{
        		type[i][j]=0;
			}
		}
		int b[n];
        
		for(int i=0;i<n;i++)
        {
        	int p;
        	cin>>p;
        	b[i]=p;
        	for(int j=0;j<p;j++)
        	{
        		int x;
        		cin>>x;
        		type[i][j]=x;
			}
		}
		
		int count;
		int output[n];
		for(int i=0;i<n;i++)
		{
			int num[100]={0};
			for(int j=0;j<b[i];j++)
			{
				num[type[i][j]]++;
			}
				count=0;
			for(int j=0;j<100;j++)
			{
				if(num[j]>=1)
				count++;
			}	
			
			if(count==4)
			output[i]=b[i]+1;
			else if(count==5)
			output[i]=b[i]+2;
			else if(count==6)
			output[i]=b[i]+4;
			else 
			output[i]=b[i];
		}
		int max=output[0];
		int pos=0;
		for(int i=1;i<n;i++)
		{
			if(max<output[i])
			{
				max=output[i];
				pos=i;
			}
		}
		int xx=0;
		for(int i=0;i<n;i++)
		{
			if(output[i]==max)
			xx++;
		}
		if(xx>=2)
		cout<<"tie"<<endl;
		else if(pos==0)
		cout<<"chef"<<endl;
		else
		cout<<pos+1<<endl;
		t--;
	}
}
