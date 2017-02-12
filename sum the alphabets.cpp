#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		int ans=0;
		for(int i=0;i<s.length();i++)
		{
			ans+=(s[i]-97)%5;
		}
		cout<<ans<<endl;
		t--;
	}
	
	return 0;
}
