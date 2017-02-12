#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s1,s;
	cin>>s1;
	s=s1;
	  transform(s.begin(), s.end(), s.begin(), ::toupper);
	while(t>0)
	{
		string word;
		cin>>word;
		int a;
		for(int i=0;i<word.length();i++)
		{
			if( (int)word[i]>=65 && (int)word[i]<=90 )
			{
				 a=(int)word[i]+32;
				a=a-97;
				cout<<s[a];
			}
			else if( (int)word[i]<=122 && (int)word[i]>=97 )
			{
			       a=(int)word[i];
			    	a=a-97;
				cout<<s1[a];	
			}
			else if(word[i]=='_')
			cout<<" ";
			else
			cout<<word[i];
		}
		cout<<endl;
		t--;
	}
	return 0;
}
