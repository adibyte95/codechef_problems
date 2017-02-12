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
		long long int count=0; 
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='7' && s[i]!='4')
			count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
