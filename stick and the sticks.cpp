#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int p=log2(n);

	int number=0;
	
	while(n>0)
	{
		if(pow(2,p) <= n)
		{
			n=n-pow(2,p);
			number++;
		}
		p--;
	}
	cout<<number;
	return 0;
}
