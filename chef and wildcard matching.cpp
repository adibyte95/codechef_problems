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
		int flag=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i] &&s1[i]!='?' && s2[i]!='?')
			{
				cout<<"No"<<endl;
				flag=1;
				break;
				
			}
		}
		if(flag==0)
		cout<<"Yes"<<endl;
		t--;
	}
	return 0;
}
