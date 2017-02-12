#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int b;
		cin>>b;
		int count =0;
		while(b-2>=2)
		{
			b=b-2;
			count++;
		}
		int sum=0;
		for(int i=1;i<=count;i++)
		{
			sum+=i;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
