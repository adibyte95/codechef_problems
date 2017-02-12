//no of anagrams in a sentence
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string ana;
	cout<<"enter the string"<<endl;
	cin>>s;
	
	cout<<"enter the string whose anagrams you want to find"<<endl;
	cin>>ana;
    int size = ana.length();	
	
	int a[size]={0};
	
	for(int i=0; i<s.length(); i++)
	{
		if(a[(int)s[i]-97] ==0)
		{
			
		}
	}
	
	return 0;
}
