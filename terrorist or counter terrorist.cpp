#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string name;
		cin>>name;
		int a[26];
		for(int i=0;i<=25;i++)
		a[i]=0;
		
		int sum=0;
		for(int i=0;i<name.length();i++)
		{
			if(a[(int)name[i]-97]==0)
			{
				a[(int)name[i]-97]=1;
				sum++;
			}
		}
		
		
		if(sum%2==0)
		cout<<"Terrorist"<<endl;
		else
		cout<<"Counter Terrorist"<<endl;
		t--;
}
return 0;
}
		

