#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		int p=0;
				p=(m-1)*(n-1)*2+m-1+n-1;
		cout<<p<<endl;
		t--;
	}
	return 0;
}
