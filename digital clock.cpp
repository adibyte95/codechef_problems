#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int h,m;
	      cin>>h>>m;
    	int num=0;
    	int p=0;
        	while(p<h && p<m && p<10)
	         {  
	        	num++;
		        p++;
   	         }
   	     p=11;
   	     while(p<h)
   	     {
		    if(p/11 <m)
		    num++;
			p+=11;
		 }
		 p=11;
		 while(p<m)
		 {
		 	if(p/11<h)
		 	num++;
		 	p+=11;
		 }
		 p=11;
		 while(p<m && p<h)
		 {
		 	if(p/11<h && p/11<m)
		 	num++;
		 	p+=11;
		 }
   	     cout<<num<<endl;
		t--;
	}
	return 0;
}
