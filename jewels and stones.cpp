#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string a,b;
		cin>>a>>b;
		int counta[52]={0};
		int countb[52]={0};
		//0-25 snaller case letters
		//26-51 upper case letters
		for(int i=0;i<a.length();i++)
		{
			int p=(int)a[i];
			if(p>=97 && p<=122)
			{
				//lower case
				int p=(int)a[i]-97;
				counta[p]++;
			}
			else
			{
				//upper case
				int p=(int)a[i]-65+26;
				counta[p]++;
			}
		}
		for(int i=0;i<b.length();i++)
		{
			int p=(int)b[i];
			if(p>=97 && p<=122)
			{
				//lower case
				int p=(int)b[i]-97;
				countb[p]++;
			}
			else
			{
				//upper case
				int p=(int)b[i]-65+26;
				countb[p]++;
			}
		}
		int count=0;
		for(int i=0;i<52;i++)
		{
		 if(counta[i]>=1 && countb[i]>=1)
		 count+=countb[i];
		}
		cout<<count<<endl;
		t--;
	}
}
