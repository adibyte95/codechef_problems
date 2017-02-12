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
		int i=0;
		int j=s.length()-1;
		int flag=0;
		
		while(i<=j)
		{
			if(s[i]!=s[j] && s[i]!='.' && s[j]!='.')
			{
				flag=1;
				break;
			}
			else if(s[i]==s[j] && s[i]!='.')
			{
				i++;
				j--;
			}
			else if(s[i]==s[j] && s[i]=='.')
			{
				s[i]='a';
				s[j]='a';
				i++;
				j--;
			}
			else if(s[i]=='.' && s[j]!='.' )
			{
				s[i]=s[j];
				i++;
				j--;
			}
			else if(s[i]!='.' && s[j]=='.')
			{
				s[j]=s[i];
				i++;
				j--;
			}
		}
		if(flag==1)
		cout<<-1<<endl;
		else
		cout<<s<<endl;
		t--;
	}
	return 0;
}
