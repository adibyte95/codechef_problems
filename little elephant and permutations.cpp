#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		//sort(a,a+n,std::greater<int>());
		double count1=0;
		double count2=0;
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				count1++;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			count2++;
		}
		if(count1==count2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
