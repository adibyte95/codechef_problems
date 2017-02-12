#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t>0)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int a,b,c,d,e,f;
		a=x2-x1;
		b=y2-y1;
		c=x3-x2;
		d=y3-y2;
		e=x1-x3;
		f=y1-y3;
		if(a*c+b*d==0)
		count++;
		if(e*c+f*d==0)
		count++;
		if(a*e+f*b==0)
		count++;
		t--;
	}
	cout<<count;
	return 0;
}
