#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	long long int min=a[0];
	long long int max=a[n-1];
	while(t>0)
	{
		long long int q;
		cin>>q;
		if(q<=max && q>=min)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		t--;
	}
	return 0;
}
