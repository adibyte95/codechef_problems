#include<bits/stdc++.h>
using namespace std;

int reverse(int i,int k)
{
	int remainder,reversedNumber=0;
	int n=i;
	 while(i != 0)
    {
        remainder = i%10;
        reversedNumber = reversedNumber*10 + remainder;
        i /= 10;
    }
    if(abs(reversedNumber-n)%k==0)
    return 1;
    else
    return 0;
}

int main()
{
	int count=0;
	int i,j,k;
	cin>>i>>j>>k;
	for(int p=i;p<=j;p++)
	{
		int ret=reverse(p,k);
		if(ret==1)
		count++;
	}
	cout<<count;
	return 0;
}
