#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t >0)
	{
		int n;
		cin>>n;
		
		int sum1 = 0; 
		int max1 = -1;
		int sum2 = 0;
		int max2 = -1;
		
 		for(int i=0; i< n; i ++)
		{
			int data;
			cin>>data;
			sum1 += data;
			if(data > max1)
			max1 = data;
			
		}
		 for(int i=0; i< n; i ++)
		{
			int data;
			cin>>data;
			sum2 += data;
			if(data > max2)
			max2 = data;
			
		}
		sum1 = sum1 - max1;
		sum2 = sum2- max2;
		
		if(sum1> sum2)
		cout<<"Bob"<<endl;
		else if(sum2 > sum1)
		cout<<"Alice"<<endl;
		else
		cout<<"Draw"<<endl;
		t -- ;
	}
}
