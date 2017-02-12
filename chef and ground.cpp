#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		int sum =0;
		for(int i=0; i<n;i ++)
		{
			int p;
			cin>>p;
			sum +=p;
		}
        sum +=m;
        float sum1 =(float)sum/n;
        sum =sum/n;
        //cout<<sum1<<" "<<sum;
        if(sum1==sum)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
		t--;
	}
	return 0;
}
