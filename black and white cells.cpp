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
		int left=0, right=0;
		int flag=0;
		for(int i=0;i<s.length();i ++)
		{
			if(s[i]=='B' && flag==0)
			left++;
			else if(s[i]=='W')
			flag=1;
			else if(s[i]=='B' && flag==1)
			right++;
		}
		if(left==right)
		cout<<"Chef"<<endl;
		else if(left>right || right>left)
		cout<<"Aleksa"<<endl;
		t--;
	}
	return 0;
}
