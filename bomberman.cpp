#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r;
	int c;
	long long int n;
	cin>>r;
	cin>>c;
	cin>>n;
	string a[r][c];
	int b[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0; j<c; j++)
		{
			b[i][j] = 0;
		}
	}
	
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c; j++ )
		cin>>a[i][j];
	}
	for(int k=1; k<=n; k++)
	{
		;
	}
	return 0;
}
