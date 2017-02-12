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
		char a=s[0];
		char b=s[1];
		int flag=0;

		if(a==b)
		{
			flag=1;
		}
		else{
		for(int i=2;i<s.length();i++)
		{
			if(i%2==0 && s[i]==a)
			continue;
			else if(i%2!=0 && s[i]==b)
			continue;
			else
			{
				flag=1;
				break;
			}
		}
		}
	
		if(flag==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		t--;
	}
	return 0;
}
