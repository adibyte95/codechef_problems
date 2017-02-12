#include<bits/stdc++.h>
using namespace std;

int main()
{
   set <long long int>s;	
   set <long long int>list1;
   set <long long int>list2;
   set <long long int>list3;
   set <long long int>final;
   int n1=0,n2=0,n3=0;
   cin>>n1>>n2>>n3;
   for(int i=0;i<n1;i++)
   {
         int p;
         cin>>p;
         list1.insert(p);
         if(s.find(p)==s.end())
         s.insert(p);
   }
   for(int i=0;i<n2;i++)
   {
         int p;
         cin>>p;
         list2.insert(p);
         if(s.find(p)==s.end())
         s.insert(p);
   }
   for(int i=0;i<n3;i++)
   {
         int p;
         cin>>p;
         list3.insert(p);
         if(s.find(p)==s.end())
         s.insert(p);
   }
   int count=0;
   set<long long int > ::iterator it;
   for(it=s.begin();it!=s.end();it++)
   {
   	if(list1.find(*it)!=list1.end() && list2.find(*it)==list2.end()  &&list3.find(*it)==list3.end() )
   	;
   	else if(list1.find(*it)==list1.end() && list2.find(*it)!=list2.end()  &&list3.find(*it)==list3.end())
   	;
   	else if(list1.find(*it)==list1.end() && list2.find(*it)==list2.end()  &&list3.find(*it)!=list3.end())
   	;
   	else
   	{
      final.insert(*it);
	  count++; 		
    }
   }
   cout<<count<<endl;
   for(it=final.begin();it!=final.end();it++)
   {
   	cout<<*it<<endl;
   }
   
	return 0;
}
