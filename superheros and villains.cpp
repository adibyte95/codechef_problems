#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int q;
		cin>>q;
		int superhero=0;
		int villain=0;
		string s;
		int flag=0;
		while(q>0)
		{
			cin>>s;
			if((s[s.length()-1]=='n' && s[s.length()-2]=='a' && s[s.length()-3]=='m'))
			superhero++;
			else
			villain++;
			if(superhero-villain>=2 && flag==0)
			{
				flag=1;
			}
			else if(villain-superhero>=3 && flag==0)
			{
				flag=2;
			}
			q--;
		}
		 if(flag==1)
			cout<<"superheroes"<<endl;
			else if(flag==2)
			cout<<"villains"<<endl;
			else if(flag==0)
		cout<<"draw"<<endl;
		t--;
	}
	return 0;
}
