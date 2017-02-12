//you will have to find the best metting point for a group of people that want to meet

#include<bits/stdc++.h>
using namespace std;

int meeting_point(int a[m][n], int n, int m)
{
	
}

int main()
{
	int n,m;
	cout<<"enter the no cols in the matrix"<<endl;
	cin>>n;
	cout<<"enter the no of rows in the matrix"<<endl;
	cin>>m;
	
	int a[n][m];
	cout<<"enter the presence in the matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the matrix you entered is: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	meeting_point(a,n,m);
	return 0;
}
