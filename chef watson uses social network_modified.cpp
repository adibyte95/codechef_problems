#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	//declarations
	set <int> special;
	vector<int> friend_index;
	vector<int > popularity;
	vector<string> message; 
	
	//input
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		special.insert(p);
	}
	
	for(int i=0;i<m;i++)
	{
		int p;
		cin>>p;
		friend_index.push_back(p);
		cin>>p;
		popularity.push_back(p);
		string s;
		cin>>s;
		message.push_back(s);
	}
	//making of hashing functions
	map<int, int> popularity_index;
	for(int i=0;i<m;i++)
	{
		popularity_index[popularity[i]]= friend_index[i];
	}
	
	map<int,string> popularity_message;
	for(int i=0;i<m;i++)
	{
		popularity_message[popularity[i]]=message[i];
	}
	//sorting the popularity array
	sort(popularity.begin(),popularity.end());
	
	//first printing the popular messages of special friends
	for(int i=m-1;i>=0;i--)
	{
		int p=popularity_index[popularity[i]];
		if(special.find(p)!=special.end())
		{
			cout<<popularity_message[popularity[i]]<<endl;
		}
	}
	//now printing the popular messages of friends who are not special
	for(int i=m-1;i>=0;i--)
	{
		int p=popularity_index[popularity[i]];
		if(special.find(p)==special.end())
		{
			cout<<popularity_message[popularity[i]]<<endl;
		}
	}
	return 0;
}
