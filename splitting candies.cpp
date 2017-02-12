#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,k;
		cin>>n>>k;
		if(k==0)
		{
			cout<<0<<" "<<n<<endl;
			t--;
			continue;
		}
		long long int p = n/k;
		long long int xx=n-p*k;
		cout<<p<<" "<<xx<<endl;
		t--;
	}
	return 0;
}
