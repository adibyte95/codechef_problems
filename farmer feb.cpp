#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	int  i;
  bool isPrime = true;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      return 1;
  else
  return 0;
}

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int x,y;
		cin>>x>>y;
		int sum=x+y+1;
		while(1)
		{
			int ret = isprime(sum);
			if(ret ==1)
			{
				cout<<sum-x-y<<endl;
				break;
			}
			sum++;
		}
	}
	return 0;
	
}
