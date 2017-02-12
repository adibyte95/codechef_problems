#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int laddu=0;
		int n;
		cin>>n;
		string origin;
		cin>>origin;
		while(n>0)
		{
			string name;
			cin>>name;
			if(name=="CONTEST_WON")
			{
				int bonus;
				cin>>bonus;
				if(bonus<=20)
				bonus=20-bonus;
				else
				bonus=0;
				laddu += 300+bonus;
			}
			else if(name=="TOP_CONTRIBUTOR")
			{
				laddu +=300;
			}
			else if(name=="BUG_FOUND")
			{
				int bug;
				cin>>bug;
				laddu +=bug;
			}
			else if(name=="CONTEST_HOSTED")
			{
				laddu+=50;
			}
		
			n--;
		}
			if(origin=="INDIAN")
			cout<<laddu/200<<endl;
			else
			cout<<laddu/400<<endl;
		t--;
	}
}
