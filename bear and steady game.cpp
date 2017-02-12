#include<bits/stdc++.h>
using namespace std;

int main() {
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

//cout<<a<<" "<<c<<" "<<g<<" "<<t<<endl;
  int i=0;
  
  int ca=0;
  int ct=0;
  int cc=0;
  int cg=0;
  int max=500000;
  int len=0;
  
  while(i<s.length())
  {
     for(int j=i; j<s.length();j++)
	 	{
	 		if(s[j] == 'A' && a!=0)
	 		ca++;
	 		
			 if(s[j] == 'C'&& c!=0 )
	 		 cc++;
	 		 
			 if(s[j] == 'G'&& g!=0)
	 		 cg++;
	 		 
			 if(s[j] == 'T'&& t!=0 )
	 		 ct++;
	 		 
			 if(ca == a && cc == c && cg == g &&ct == t )
	 		 {
	 		   len = j-i;
	 		   //cout<<"len is: "<<len+1<<endl;
	 		   if(len< max )
	 		   max =len;
//	 		   cout<<max+1<<endl;
				break;	
			 }
		 }
		 ca=0;
		 cc=0;
		 ct=0;
		 cg=0;
		 i++;
  } 
  if(max ==0)
  cout<<max;
  else
  cout<<max+1;   
    return 0;
}

