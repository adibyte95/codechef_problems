#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int b;
	long long int w;
	
	long long int x;
	long long int y;
	long long int z;
	for(int i=0; i<t; i++)
	{
		cin>>b;
		cin>>w;
		
		cin>>x;
		cin>>y;
		cin>>z;
		
		int cost =0;
		if(x==y==z)
			cost = b*x + w*y;
		else if( z > x && z >y)
			cost = b*x + w*y;
		 
		 else if(x>z && y<z)
		 {
		 	 cost =w*y;
		 	 if(y+z<x)
		 	 cost += b*(y+z);
		 	 else 
		 	 cost +=b*x;
		 }
		 else if(y>z && x<z)
		 {
		 	cost = b*x;
		 	if(x+z<y)
            cost +=w*(x+z);
            else
            cost +=w*y;
		 }
			else if(x>z && y>z)
			{
				if(x<y && x+z<y)
				{
					cost = b*x +w*(x+z);
				}
				else if(x<y && x+z>y)
				{
					cost = b*x +w*y;
				}
			   else if(y<x && y+z<x)
			   {
			   	cost = w*y +b*(z+y);
			   }
			   else if(y<x && y+z>x)
			   {
			   	cost = b*x +w*y;
			   }
					
			}	
			
			cout<<cost<<endl;
	}
	return 0;
}
