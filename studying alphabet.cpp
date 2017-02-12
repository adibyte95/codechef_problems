#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int a[26]={0};
    
    for(int i=0;i<s.length();i++)
    {
    	a[s[i]]=1;
	}
	int n;
	cin>>n;
	while(n>0)
	{
		string word;
		cin>>word;
		int flag=1;
		for(int i=0;i<word.length();i++)
		{
			if(a[word[i]] != 1 )
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
		n--;
	}
	return 0;
}
