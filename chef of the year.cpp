#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	set<string > country_storage;
	set<string> name_storage;
	//input name output the country to which the person belong
	map<string , string> hash;
	
	
	for(int i=0;i<n;i++)
	{
	   string name,country;
	    cin>>name>>country;
	   if(country_storage.find(country)==country_storage.end())
	   country_storage.insert(country);
	   if(name_storage.find(name)==name_storage.end())
	   name_storage.insert(name);
	   hash[name]=country;
	}
	//country mapping
	map<string , int > counter_country;
	
	//taking the next set of inputs from the user
	map<string, int > counter_name;
	for(int i=0; i< m; i++)
	{
		string name;
		cin>>name;
		int country_score = counter_country[hash[name]];
		counter_country[hash[name]] = country_score+1;
	//	cout<<name<<" "<<counter_country[hash[name]]<<endl;
		int val = counter_name[name];
		counter_name[name] =val+1;
	//	cout<<name<<" "<<counter_name[name]<<endl;
	}
	 //to find the smaller country name who got the highest votes
	 int max_ans=-1;
	 string name_ans="";
	 int flag=0;
	 set<string > :: iterator itr;
	 
	 for(itr = country_storage.begin(); itr!=country_storage.end(); itr++)
	 {
	 	//cout<<*itr<<endl;
	 	int val = counter_country[*itr];
	 	string name = *itr;
	 //	cout<<name<<" "<<val<<endl;
	 	if(flag==0)
	 	{
	 		flag=1;
	 		max_ans=val;
	 		name_ans=name;
		 }
		 else
		 {
		 	if(max_ans < val )
		 	{
		 	  max_ans = val;
			  name_ans = name;	
			}
			else if(max_ans == val && name_ans.compare(name)>0)
			{
				name_ans = name;
			}
		 }
	 }
	 
	 //cout<<endl;
	 
	 cout<<name_ans<<endl;
	 // to find the smaller person name who is the winner
	 max_ans =-1;
	 name_ans = "";
	 flag=0;
	 for(itr = name_storage.begin(); itr!=name_storage.end(); itr++)
	 {
	 	//cout<<*itr<<endl;
	 	int val = counter_name[*itr];
	 	string name = *itr;
	 	//cout<<val<<" "<<name<<endl;
	 	if(flag==0)
	 	{
	 		flag=1;
	 		max_ans=val;
	 		name_ans=name;
		 }
		 else
		 {
		 	if(max_ans < val )
		 	{
		 	  max_ans = val;
			  name_ans = name;	
			}
			else if(max_ans == val && name_ans.compare(name)>0)
			{
				name_ans = name;
			}
		 }
	//	 cout<<name_ans<<endl;
	 }
	 cout<<name_ans;
	return 0;
}
