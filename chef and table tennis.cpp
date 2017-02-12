#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int chef=0,oppo=0;
		string s;
		cin>>s;
		int c=0,o=0;
		int flag=0;
		int flag2=0;
		for(int i=0;i<s.length();i++)
		{
			if(chef==10 && oppo==10)
				flag=1;
		
			 if(s[i]=='1' && flag==0)
			 {
				chef++;
				if(chef==11 && oppo!=11)
				{
					cout<<"WIN"<<endl;
				break;
				}
			 }
			 if(s[i]=='0' && flag==0)
			{
				oppo++;
				if(oppo==11 && chef!=11)
				{
			    cout<<"LOSE"<<endl;
				break;
				}
			}
			 if(s[i]== '1' && flag==1)
			{
				chef++;
				if(chef-oppo==2)
				{
					cout<<"WIN"<<endl;
					break;
				}
				else if(oppo-chef==2)
				{
					cout<<"LOSE"<<endl;
					break;
				}
			}
			 if(s[i]=='0' && flag==1)
			{
				oppo++;
					if(chef-oppo==2)
				{
					cout<<"WIN"<<endl;
					break;
				}
				else if(oppo-chef==2)
				{
					cout<<"LOSE"<<endl;
					break;
				}
			}

		}
		t--;
	}
	return 0;
}
