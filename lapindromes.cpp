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
		int a[26]={0};
		int b[26]={0};
		if(s.length()%2==0)
		{
			int p=s.length()/2-1;
			for(int i=0;i<s.length();i++)
			{
				if(i<=p)
				a[(int)s[i]-97]++;
				else
				b[(int)s[i]-97]++;
			}
		}
		else
		{
			int p=s.length()/2;
			int x=0;
			for(int i=0;i<s.length();i++)
			{
				if(i==p)
				{
					x=1;
					continue;
				}
				if(x==0)
				a[(int)s[i]-97]++;
				else
				b[(int)s[i]-97]++;
			}
		}
		int flag=0;
			for(int i=0;i<26;i++)
			{
				if(a[i]!=b[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
