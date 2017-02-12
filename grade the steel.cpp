#include<bits/stdc++.h>
using namespace std;

int main()
{
	int te;
	cin>>te;
	int h=0;
	float c=0.0;
	int t=0;
	for(int i=0;i<te;i++)
	{
		cin>>h>>c>>t;
		if(h>50 && c<.7 && t>5600)
		cout<<"10"<<endl;
		else if(h>50 && c<.7 )
		cout<<"9"<<endl;
		else if(c<.7&&  t>5600)
		cout<<"8"<<endl;
		else if(h>50 && t>5600)
		cout<<"7"<<endl;
		else if((h>50 && c>.7 && t<5600) || (h<50 && c<.7 && t<5600) ||(h<50 && c>.7 && t>5600))
		cout<<"6";
		else
		cout<<"5"<<endl;
	}
	return 0;
}
