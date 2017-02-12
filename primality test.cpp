#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int flag=0;
		for(int i=2;i<n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				cout<<"no"<<endl;
				break;
			}
		}
		if(flag==0)
		cout<<"yes"<<endl;
		t--;
	}
	return 0;
}
