#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s1,s2;
		cin>>s1>>s2;
		long long int a[26]={0};
		
		for(int i=0;i<s1.length();i++)
		a[(int)s1[i]-97]++;
		
		for(int i=0;i<s2.length();i++)
		a[(int)s2[i]-97]++;
		
		int n;
		cin>>n;
		long long int b[26]={0};
		for(int i=0;i<n;i++)
		{
			cin>>s1;
			for(int i=0;i<s1.length();i++)
			b[(int)s1[i]-97]++;
		}
		int flag=0;
		for(int i=0;i<=25;i++)
		{
			if(a[i] >= b[i])
			continue;
			else
			{
				flag=1;
				break;
			}
		}
//		for(int i=0;i<=25;i++)
//		cout<<a[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<=25;i++)
//		cout<<b[i]<<" ";
//		cout<<endl;
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
