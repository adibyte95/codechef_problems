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
		string snew="";
		char a='*';
		char b='>';
		char c='<';
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='*')
			snew+="*";
			else if(s[i]=='>')
				snew+="<";
			else if(s[i]=='<')
				snew+=">";
		}
		int count=0;
		int i=1;
		while(i<s.length()-1)
		{
		if(snew[i-1]== '>' && snew[i]=='<')
			{
				count++;
				i+=2;
			}
			else
			i++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
