/* a set of numbers exists within a set that equals the given number*/
#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(long long int s[],long long int n,long long int sum)
{
	bool subset[n+1][sum+1];
	//the value of the subset will be true if there is a subset [0...j-1] with sum equal to i
	
	// if the sum is 0 then ans is true
	for(int i=0;i<=n; i++)
	subset[i][0]=true;
	
	// if the sum is not 0 and the set is empty , then the ans is false
	for(int i=1;i<=sum;i++)
	subset[0][i]=false;
	
	//now filling the subset matrix in bottom up manner
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(s[i-1]<j)
			subset[i][j]=subset[i-1][j];
			else
			subset[i][j]=(subset[i-1][j] || subset[i-1][j-s[i-1]]);
		}
	}
	cout<<"the matrix is: "<<endl;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
			cout<<subset[i][j]<<" ";
	    cout<<endl;
	}
	cout<<"the subset is : "<<endl;
	/*
	int count=0;
	int a[100000];
	  int i=n;
	  int j=sum-1;
	  
	  while(j!=0 && i!=0)
	  {
	  	cout<<"i is: "<<i<<" j is: "<<j<<endl;
		if(subset[i-1][j]==true)
		{
			i--;
			a[count]=s[i];
			count++;	
		}
		else
		{
			i--;
			j=j-s[i-1];
			
	
		}
	}
	cout<<"count is: "<<count<<endl;
	for(int i=1;i<=count;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	*/
	return subset[n][sum-1];
}
int main()
{
	long long int n;
	cout<<"enter the number of element in the array: "<<endl;
	cin>>n;
	long long int s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"enter the sum which you wanna find: "<<endl;
	long long int sum;
	cin>>sum;
	if(isSubsetSum(s,n,sum))
	cout<<"found the subset within the given set"<<endl;
	else
	cout<<"no subset is found within the given subset"<<endl;
	
}
