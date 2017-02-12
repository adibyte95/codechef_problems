// rod cutting problem

/*
length vs price
1->2
2->5
3->7
4->8
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		cout<<"enter the lenght of the rod"<<endl;
		long long int length=0;
		cin>>length;
		long long int cost[4];
		cout<<"enter the cost for 4 pieces"<<endl;
		for(int i=0;i<4;i++)
			cin>>cost[i];
		
		long long int maximum=0;
		long long int matrix[4][length+1];
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<=length;j++)
			{
				matrix[i][j]=0;
			}
		}
		//for the first row
		for(int i=1;i<=length;i++)
		matrix[0][i]=cost[0]*i;
		
		//for the rest of the rows
		for(int i=1;i<4;i++)
		{
			for(int j=1;j<=length;j++)
			{
				if(j<i+1)
					matrix[i][j]=matrix[i-1][j];
				else
					matrix[i][j]=max(matrix[i-1][j],matrix[i][j-i-1]+cost[i]);
			}
		}
		 maximum = matrix[3][5];
		cout<<"the final matrix is :"<<endl;
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<=length;j++)
			cout<<matrix[i][j]<<"\t";
			cout<<endl;
		}
		cout<<"the maxmimum profit that can be made by selling the different piece: "<<maximum<<endl;
		t--;
	}
	return 0;
}
