#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	int gcd=0;
	for(int i=1;i<=a&&i<=b;i++){

if(a%i==0 && b%i == 0 ){

gcd=i;

   }

}
return gcd;
}
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		int l,b;
		cin>>l>>b;
		int g = gcd(l,b);
		int val=(l/g)*(b/g);
		cout<<val<<endl;
		n--;
	}
	return 0;
}
