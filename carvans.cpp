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
		int speed=0;
		int count=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		count =1;
		int min=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<=min)
			{
				min=a[i];
				count++;
			}
		}
		printf("%d\n",count);
		t--;
	}
	return 0;
}
