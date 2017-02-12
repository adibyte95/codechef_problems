#include<bits/stdc++.h>
using namespace std;

int digitcount(int n)
{
	int digit=0;
	while(n!=0)
	{
		digit+=n%10;
		n=n/10;
	}
	return digit;
}

int main()
{
	int n;
	cin>>n;
	int count=0;
	int x=n-99;;
	while(x<n)
	{
	     int ret=digitcount(x);
	  int ret2=digitcount(ret);
	  if(x+ret+ret2==n)
    	count++;
	  x++;
	}
	cout<<count;
}
