#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			sum+=p;
			a[i]=p;
		}
			sort(a,a+n);
		int ans1=sum/x;
		int ans2=(sum-a[0])/x;
		if(ans2==ans1)
		cout<<"-1"<<endl;
		else
		cout<<ans1<<endl;
		
		t--;
	}
	return 0;
}
