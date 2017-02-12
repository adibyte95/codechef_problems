#include<bits/stdc++.h>
using namespace std;

void print(string s1,string s2)
{
	int pointer=0;
	int flag=0;
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]==s1[pointer])
			pointer++;
		if(pointer==s1.length())
	    {
	    	flag=1;
	    	cout<<"YES"<<endl;
	    	break;
		}
	}
	if(flag==0)
	cout<<"NO"<<endl;
}
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(s1.length()<=s2.length())
		print(s1,s2);
		else
		print(s2,s1);
		n--;
	}
	 return 0;
}
