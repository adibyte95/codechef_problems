#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	long long int d;
	cin>>d;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	long long int count2=0;
	 int i=n-1;
	 int j=n-2;
	while(i>=1)
	{
		if(a[i]-a[i-1]<=d)
		{
			i-=2;
			count2++;
		}
		else
		i--;
	}
	cout<<count2;
	return 0;
} 
