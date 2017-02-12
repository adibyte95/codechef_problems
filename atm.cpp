#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int x;
float y;
cin>>x>>y;
 if(y-.5>=x+.5 && x%5==0)
{
	y=y-.5-x;
cout<<y;
}
else
cout<<y;
return 0;
}  


