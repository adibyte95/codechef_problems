#include<bits/stdc++.h>
using namespace std;

int is_palin(int n)
{
	int originalInteger=n;
	int remainder,reversedInteger=0;
   while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    if (originalInteger == reversedInteger)
        return 1;
    else
    return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int sum=0;
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			int ret = is_palin(i);
			if(ret==1)
			sum+=i;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
