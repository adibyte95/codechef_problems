#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int c,d,l;
		cin>>c>>d>>l;
		if(d==0)
		{
			if((double)l/4==c)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		else if(c==0)
		{
			if((double)l/4==d)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		else
		{
			long long int pp1=c*4;
			long long int pp2=d*4;
			long long int max=pp1+pp2;
			long long int min=0;
			if((double)c/2<=d)
			{
				min=d*4;
			}
			else
			{
				c=c-(2*d);
				min=(c+d)*4;
			}
			if(l%4==0 && l<=max && l>=min)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		t--;
	}
	return 0;
}
