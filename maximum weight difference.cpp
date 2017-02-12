#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int dif1,dif2;
		int sum1=0,sum2=0;
		
		for(int i=0;i<n-k;i++)
		sum1+=a[i];
		for(int i=n-k;i<n;i++)
		sum2+=a[i];
		dif1=abs(sum1-sum2);
		sum1=0;
		sum2=0;
		
		for(int i=0;i<k;i++)
		sum1+=a[i];
		for(int i=k;i<n;i++)
		sum2+=a[i];
		dif2=abs(sum1-sum2);
		cout<<max(dif1,dif2)<<endl;
		t--;
	}
	return 0;
}
