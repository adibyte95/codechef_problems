#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n],d[n];
	for(int i=0;i<n*2;i++)
	{
		int p;
		cin>>p;
		if((i+1)%2==0)
		{
			b[i/2]=p+b[i/2-1];
		}
		else if((i+1)%2!=0)
		{
			a[i/2]=p+a[i/2-1];
		}
	}
//	for(int i=0;i<n;i++)
//	cout<<a[i]<<" ";
//	cout<<endl;
//	
//	for(int i=0;i<n;i++)
//	cout<<b[i]<<" ";
//	cout<<endl;
//	
	
	long long int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
		d[i]=b[i]-a[i];
	}
   for(int i=0;i<n;i++)
   {
   	if(c[i]>0)
   	sum1+=c[i];
   	if(d[i]>0)
   	sum2+=d[i];
   }
   int lead1=0,lead2=0;
   for(int i=0;i<n;i++)
   {
   	if(c[i]>0)
   	lead1+=c[i];
   	else if(d[i]>0)
   	lead2+=d[i];
   }
//	for(int i=0;i<n;i++)
//	cout<<c[i]<<" ";
//	cout<<endl;
//
//	for(int i=0;i<n;i++)
//	cout<<d[i]<<" ";
//	cout<<endl;
	sort(c,c+n);
	sort(d,d+n);
	if(sum1>sum2)
	cout<<"1"<<" "<<c[n-1]<<endl;
	else
	cout<<"2"<<" "<<d[n-1]<<endl;
}
