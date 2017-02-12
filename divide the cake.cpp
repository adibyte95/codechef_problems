#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;		int a;
	cin>>n;
	while(n>0)
	{
		cin>>a;
		int p=360/a;
		int xx=p*a;
		
		if(xx==360)
		cout<<"y ";
		else
		cout<<"n ";
		if(a<=360)
		cout<<"y ";
		else
		cout<<"n ";
		if(a<=26)
		cout<<"y"<<endl;
		else
		cout<<"n"<<endl;
		n--;
	}
	return 0;
}
