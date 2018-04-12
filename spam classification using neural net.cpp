# include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	// no of test cases
	int t;
	cin>>t;
	while(t> 0)
	{
		int n;
		long long int minX;
		long long int maxX;
		
		cin>>n;
		cin>>minX;
		cin>>maxX;
		
		int w[n];
		int b[n];
		
		long long int spam = 0;
		for(int i = 0; i < n; i ++)
		{
			cin>>w[i];
			cin>>b[i];
		}
		
		long long int multi = 1;
		
		long long int b_sum = 0;
		long long int w_multi = 1;
		for(int i= 0; i< n; i ++)
		{
			multi = multi * w[i];
			b_sum += w_multi * b[n-i-1];
			w_multi = w_multi * w[n-i-1];	
		}
		
		for(long long int i=minX; i<=maxX; i ++)
		{
			long long int sum = 0;
			sum = multi * i + b_sum;
			if(sum %2 != 0)
				spam ++;
		}
		
		/*
		
		for(long long int i=minX; i<=maxX; i ++)
		{
			long long int sum = 0;
			long long int num = i;
			for(int j = 0; j < n ;j++)
			{
				sum = w[j]*num + b[j];
				num = sum;
			}
			if(sum %2 != 0)
				spam ++;
		}
		*/
		cout<<maxX-minX-spam+1<<" "<<spam<<endl;
		t--;
		
	}
	return 0;
}
