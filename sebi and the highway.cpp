#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q>0)
	{
		int s,sg,fg,d,t;
		cin>>s>>sg>>fg>>d>>t;
		float marker=d*50*1.0;
		float x=(marker/t)*3.6;
		x=x+s;
        float sd=abs(sg-x);
        float fd=abs(fg-x);
        
        if(sd<fd)
        cout<<"SEBI"<<endl;
        else if(sd>fd)
        cout<<"FATHER"<<endl;
        else if(sd==fd)
        cout<<"DRAW"<<endl;
		q--;
	}
	return 0;
}
