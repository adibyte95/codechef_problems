#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		string n;
		cin>>n;
		int c1=0,c2=0;
		for(int i=0;i<n.length();i++)
		{
			if (n[i]=='1')
			c1++;
			else
			c2++;
		}
		if(c1==1 || c2==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
return 0;
}
