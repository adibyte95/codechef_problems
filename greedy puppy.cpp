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
	   int max=n%k;k--;
	   while(k>=1)
	   {
	   	int p=n%k;
	   	k--;
	   	if(p>max)
	   	max=p;
	   }
	   cout<<max<<endl;
		t--;
	}
	return 0;
}
