#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]==s2[i] && s2[i]=='W')
			cout<<'B';
			else if(s1[i]==s2[i] && s2[i]=='B')
			cout<<'W';
			else
			cout<<'B';
		}
		cout<<endl;
		t--;
	}
	return 0;
}
