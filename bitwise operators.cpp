//all the elements are even except onee find the number
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number of elements"<<endl;
  cin>>n;
  int a[n];
  int res =0;
  
  for(int i=0; i<n; i++)
  cin>>a[i];
  
  for(int i=0; i<n; i++)
  res = res^a[i];
  
  cout<<res;
	return 0;
}
