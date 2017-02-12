#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	while(n>0)
	{
		cin>>s;
		int count=0;
		int lcount=0;
		int flag=0;
		int days=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='#')
			{
				if(count<lcount)
				{
					days++;
					count=lcount;
				}
				lcount=0;
			}
			else
			{
				lcount++;
			}
		}
		cout<<days<<endl;
		n--;
	}
	return 0;
}
