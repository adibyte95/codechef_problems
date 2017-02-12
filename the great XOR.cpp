#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n;
		cin>>n;
		if(n==2)
		cout<<1<<endl;
		else if(n==3 || n==7)
		cout<<0<<endl;
		else if(n==4)
		cout<<3<<endl;
		else if(n==5)
		cout<<2<<endl;
		else if(n==6)
		cout<<1<<endl;
		else
		{
			long long int p=n/4;
			long long int aa=log2(p);
			//cout<<"aa is : "<<aa<<endl;
			 aa=pow(2,aa)*4;
			 //cout<<"aa is : "<<aa<<endl;
			long long int diff=aa-1;
			long long int pp=aa-n;
			diff=diff+pp;
			cout<<diff<<endl;
		}
		t--;
	}
	return 0;
}
