#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
		string s;
	while(t>0)
	{
		cin>>s;
		int i=s.length()-1;
		while( i>=3)
		{
			int a=(int)s[i];
			int b=(int)s[i-1];
			int c=(int)s[i-2];
			int d =(int)s[i-3];
			if((d==63 ||d==67) && (c==63 ||c==72) && (b==63 ||b==69)&& (a==63||a==70) && (i-3>=0))
			{
				s[i]='F';
				s[i-1]='E';
				s[i-2]='H';
				s[i-3]='C';
				i-=3;
			}
			else
			i--;
		}
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='?')
		      s[i]='A';
		}
		 cout<<s<<endl;
		t--;
	}
	return 0;
}
