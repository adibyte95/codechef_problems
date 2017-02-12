#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		long long int v[n];
		
		for(int i=0;i<n;i++)
		cin>>v[i];
		
		map<long long int ,int >hash;   //population to population index mapping
		for(int i=0;i<n;i++)
		{
			hash[v[i]]=i;
		}
		
		set<int> s[n];
		for(int i=0;i<n-1;i++)
		{
			int a,b;
			cin>>a>>b;
			s[a-1].insert(b-1);  //stores all the connections
			s[b-1].insert(a-1);
		}
		
		for(int i=0;i<n;i++)
		{
			s[i].insert(i);
		}
				
		set<int> ::iterator it;
		/*cout<<"the elements of the set are"<<endl;
		for(int i=0;i<n;i++)		
		{
			for(it=s[i].begin();it!=s[i].end();it++)
			{
				cout<<*it<<" ";
			}
			cout<<endl;
		}*/
		std::sort(v, v+n, std::greater<long long int>());
	
		for(int i=0;i<n;i++)
		{
			  for(int j=0;j<n;j++)
			  {
					if(s[i].find(hash[v[j]])==s[i].end() )
					{
						  cout<<hash[v[j]]+1<<" ";
					        break;	
					}
			  }
		}
		cout<<endl;
	  t--;
	}
	return 0;
}
