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
		int count1=0,count2=0;
		int flag1=0,flag2=0;
		for(int i=0;i<s.length();i++)
		{
		  if(flag1==1)
		  {
		  	if(s[i]!='+')
		  	count1++;
		  	flag1=0;
		  }
		  else if(flag1==0)
		  {
		  	if(s[i]!='-')
		  		count1++;
		  		flag1=1;
		  }
		  if(flag2==1)
		  {
		  	if(s[i]!='-')
		  	count2++;
		  	flag2=0;
		  }
		  else if(flag2==0)
		  {
		  	if(s[i]!='+')
		  		count2++;
		  		flag2=1;
		  }	
		}
		cout<<min(count1,count2)<<endl;
		t--;
	}
	
	return 0;
}
