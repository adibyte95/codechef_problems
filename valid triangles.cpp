#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c==180 && a<180 && b<180 && c<180 && a!=0 &&b!=0&&c!=0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
