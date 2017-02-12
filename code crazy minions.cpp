#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		int count =2;
		int digit=(int)s[0]-97;
		for(int i=1;i<s.length();i++)
		{
			if((int)s[i]-97>=digit)
				count +=(((int)s[i]-97)-digit)+1;
			else
			{
				char z='z';
				count+=((int)z-97-digit)+1+1+((int)s[i]-97);
			}
			digit=(int)s[i]-97;
		}
		if((s.length()*11)<count)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		t--;
	}
}
