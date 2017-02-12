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
		
		long long int sum=0;
		for(int i=0;i<n;i++)
		sum +=a[i];
        long long int p=pow(2,k-1);
        if(p%2==0)
        cout<<"even"<<endl;
        else
        {
        	sum++;
        	if(sum%2==0)
        	cout<<"even"<<endl;
        	else
        	cout<<"odd"<<endl;
		}
		t--;
	}
	return 0;
}
