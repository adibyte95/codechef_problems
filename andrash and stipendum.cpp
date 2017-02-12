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
		int a[n];
		int p5=0;
		int p2=0;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			sum+=p;
			a[i]=p;
			if(p==5)
			 p5=1;
			if(p==2)
			p2=1;
		}
		sum = (double)(sum/n);
		 if(p2==1)
		cout<<"No"<<endl;
		else if(p5==0)
		cout<<"No"<<endl;
		else if(sum >=4)
		cout<<"Yes"<<endl;
		else if(sum<4)
		cout<<"No"<<endl;
		t--;
	}
	return 0;
}
