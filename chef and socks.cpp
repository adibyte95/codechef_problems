#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int jc,sc,m;
	cin>>jc>>sc>>m;
	m=m-jc;
	sc=m/sc;
	if(sc%2!=0)
	cout<<"Unlucky Chef";
	else
	cout<<"Lucky Chef";
	
	return 0;
}
