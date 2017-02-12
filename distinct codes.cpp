#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector<string>s[200];
	while(t>0)
	{
		int top=0;
		int count=0;
		string code;
		cin>>code;
		string c;
		int flag;
		for(int i=0;i<code.length()-1;i++)
		{
				flag=0;
		      string c=code.substr(i,2);
		      int p=(int)code[i]+(int)code[i+1]-65-65;
		      p=p%200;
		      vector<string>::iterator it;
			  it=find(s[p].begin(),s[p].end(),c);
		      if(it==s[p].end())
		      {
		      	count++;
		      	s[p].push_back(c);
			  }
		}
		for(int j=0;j<200;j++)
		s[j].clear();
		cout<<count<<endl;
		t--;
	}
}

