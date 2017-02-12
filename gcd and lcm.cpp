#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b;
		cin>>a>>b;
		 int p=a*b;
		int gcd=0;
		int m=min(a,b);
		for(int i=1;i<=m;i++)
		{
			if(a%i==0 && b%i==0)
				gcd=i;
		}
		 int  lcm=p/gcd;		
		cout<<gcd<<" "<<lcm<<endl;
		t--;
	}
	return 0;
}
