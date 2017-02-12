#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	//cout<<"sum is: "<<sum<<endl;
    long long int aa=0;
    for(int i=1;i<=n;i++)
    aa+=i;
    //cout<<"aa is : "<<aa<<endl;
	if(aa==sum)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
