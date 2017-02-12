#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
			long long int n,b,m;
	cin>>n>>b>>m;
	long long int time=0;
	int brk=1;
	while(n>0)
	{
		if(n%2!=0)
		{
			time +=((n+1)/2)*m*brk;
			n=n-((n+1)/2);
		}
		else 
		{
			time+=(n/2)*m*brk;
			n=n-(n/2);
		}
		time +=b;
		brk=brk*2;
    }
    	cout<<time-b<<endl;
    	t--;
	}
	
	return 0;
}
