#include <bits/stdc++.h>
using namespace std;

int main() {
     int n,d;
    cin>>n;
    cin>>d;
    int a[n];
    
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int count  =0;
    int k=0;
    
    for(int i=0; i<n-3; i++)
		{ 
        for(int j=i+1; j<n-2; j++)
            {
               int k= j-i;
              k= j+k;
               if(k <=n-1)
                  {
                  if((a[j]-a[i] == d) && (a[k]-a[j] == d))
                      count++;
                   cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
              }
            }
      }
    
    cout<<count;
      
    return 0;
}

