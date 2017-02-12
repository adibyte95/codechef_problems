#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	sum+=i;
	
	return sum;
}

int main()
{
	int t;
	cin>>t;
	int d,n;
	for(int k=0;k<t;k++)
	{
		cin>>d>>n;
			for(int i=0;i<d;i++)
		n=sum(n);
		cout<<n<<endl;
	}
	
	return 0;
}
