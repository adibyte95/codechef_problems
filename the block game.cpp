#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		string n;
		cin>>n;
		int flag=0;
		for(int i=0;i<n.length();i++)
		{
			if(n[i]==n[n.length()-1-i])
			continue;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"losses"<<endl;
		else
		cout<<"wins"<<endl;
	}
	
	return 0;
}
