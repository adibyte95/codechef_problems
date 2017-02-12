#include<bits/stdc++.h>
using namespace std;

int main()
{ 
     int n;
    cin>>n;
    string s;
    cin>>s;
    int num = (int)n/4;

 int a=0;
    int c=0;
    int g=0;
    int t=0;
for(int i=0; i<s.length(); i++)
        {
      if(s[i] == 'A')
          a++;
          if(s[i] == 'C')
              c++;
          if(s[i] == 'G')
              g++;
          if(s[i] == 'T')
            t++;
    }
   
        a= a-num;
        c= c-num;
        g= g-num;
        t= t-num;
if(a<0)
a=0;
if(c<0)
c=0;
if(g<0)
g=0;
if(t<0)
t=0;
cout<<a<<" "<<c<<" "<<g<<" "<<t<<endl;
int pos1 =0;

int pos2=0;

  int lp=0;
  int ca=0;
  int ct=0;
  int cg=0;
  int cc=0;
  while(pos1 < s.length())
  {
    	   if(s[pos1] == 'A' && a!=0)
	 		  ca++;
	 		
			 if(s[pos1] == 'C'&& c!=0 )
	 		 cc++;
	 		 
			 if(s[pos1] == 'G'&& g!=0)
	 		 cg++;
	 		 
			 if(s[pos1] == 'T'&& t!=0 )
	 		 ct++;
	 	   	 cout<<cc<<" "<<ct<<endl;
	 		  if( cc == c  || ct == t )
	 		  {
	 		  	cout<<"pos1: "<<pos1<<endl;
	 		  	cout<<"length is: "<<(pos1-pos2)<<endl;
	 		  	pos2= pos1;
	 		  	ca=0;
	 		  	cc=0;
	 		  	cg=0;
	 		  	ct=0;
	 		  	cout<<"pos2: "<<pos2<<endl;
			   }
			   pos1++;
  }
	return 0;
}
