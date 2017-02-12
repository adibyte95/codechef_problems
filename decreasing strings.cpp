#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
  	cin>>n;
	int k=n/25;
	int p=n-k*25;
	string s="zyxwvutsrqponmlkjihgfedcba";
	string s1="abcdefghijklmnopqrstuvwxyz"; 
	if(p>0)
	{
	   while(p>=0)
	{
		cout<<s1[p];
		p--;
	}	
	}
	
	while(k>0)
	{
	  cout<<s;
	  k--;	
	}
	cout<<endl;
	t--;
	}
		return 0;
}
