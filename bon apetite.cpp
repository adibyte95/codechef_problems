#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int cost[n];
	for(int i=0;i<n;i++)
	cin>>cost[i];
     
	 int charge=0;
	 cin>>charge;

	 int sum=0;
	 for(int i=0;i<n;i++)
	 {
	   if(i!=k)
	   sum+=cost[i]; 	
	 }	

	 if(charge >(sum)/2)
	 cout<<charge-(sum)/2;
	 else
	 cout<<"Bon Appetit";
	 
	
	return 0;
}
