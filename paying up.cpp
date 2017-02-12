#include <bits/stdc++.h>
using namespace std;
 
bool isSubsetSum(int set[], int n, int sum)
{
    bool subset[sum+1][n+1];
 
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
 
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
 
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || 
                                 subset[i - set[j-1]][j-1];
       }
     }
     return subset[sum][n];
}
 
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		if( isSubsetSum(a,n,m) == true)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		t--;
	}
  return 0;
}
